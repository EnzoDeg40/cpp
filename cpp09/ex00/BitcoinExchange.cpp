/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:06 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/05 11:12:57 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
    {
        _btcHistory = rhs._btcHistory;
    }
    return (*this);
}

bool BitcoinExchange::isDatePrevious(std::string dateBtc, std::string dateUser)
{
    if (!isDate(dateBtc) || !isDate(dateUser))
    {
        std::cerr << "Error: Invalid date format" << std::endl;
        return false;
    }

    // Comparer les années
    std::string yearBtc = dateBtc.substr(0, 4);
    std::string yearUser = dateUser.substr(0, 4);
    if (yearBtc < yearUser)
    {
        return true;
    }
    else if (yearBtc > yearUser)
    {
        return false;
    }

    // Comparer les mois
    std::string monthBtc = dateBtc.substr(5, 2);
    std::string monthUser = dateUser.substr(5, 2);
    if (monthBtc < monthUser)
    {
        return true;
    }
    else if (monthBtc > monthUser)
    {
        return false;
    }

    // Comparer les jours
    std::string dayBtc = dateBtc.substr(8, 2);
    std::string dayUser = dateUser.substr(8, 2);
    return dayBtc <= dayUser;
}

void BitcoinExchange::checkValue(std::string date, float nbBtc)
{
    std::map<std::string, float>::iterator closestDate = _btcHistory.end();

    for (std::map<std::string, float>::iterator it = _btcHistory.begin(); it != _btcHistory.end(); ++it)
    {
        if (isDatePrevious(it->first, date))
            closestDate = it;
        else
            break;
    }

    if (closestDate == _btcHistory.end())
    {
        std::cerr << "Error: date not found" << std::endl;
        return;
    }

    std::cout << closestDate->first << " => " << nbBtc << " = " << closestDate->second * nbBtc << std::endl;
}


bool BitcoinExchange::isDate(std::string date)
{
    if (date.size() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (date[i] < '0' || date[i] > '9')
            return false;
    }
    return true;
}

void BitcoinExchange::parseData(std::string const &line, bool isUser)
{
    size_t pos;

    if (isUser)
        pos = line.find('|');
    else
        pos = line.find(',');
    if (pos == std::string::npos)
    {
        return;
    }
    std::string key = line.substr(0, pos);
    float value;
    std::stringstream convert;
    convert << line.substr(pos + 1);
    convert >> value;
    // if (!(convert >> value))
    // {
    //     throw std::runtime_error("Error: Conversion failed for line: " + line);
    // }
    if (isUser)
    {
        key = key.substr(0, key.size() - 1);
        if (!isDate(key))
        {
            // throw std::runtime_error("Error: Invalid date format for line: " + line);
            std::cerr << "Error: Invalid date format for line: " << line << std::endl;
            return;
        }
        checkValue(key, value);
    }
    else
        _btcHistory.insert(std::pair<std::string, float>(key, value));
}

void BitcoinExchange::printData()
{
    for (std::map<std::string, float>::iterator it = _btcHistory.begin(); it != _btcHistory.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void BitcoinExchange::loadData(std::string const &filename, bool isUser)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: Could not open file " + filename);

    std::string line;
    while (std::getline(file, line))
    {
        if (line.empty())
            continue;

        if (isUser)
            parseData(line, true);
        // {
        // std::cout << "User data:" << line << std::endl;
        // }
        else
            parseData(line, false);
    }

    file.close();
}