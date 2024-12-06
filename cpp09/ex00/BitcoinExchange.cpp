/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:06 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 12:40:54 by edegraev         ###   ########.fr       */
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

void BitcoinExchange::checkValue(std::string date, double nbBtc)
{
    std::map<std::string, double>::iterator closestDate = _btcHistory.end();

    for (std::map<std::string, double>::iterator it = _btcHistory.begin(); it != _btcHistory.end(); ++it)
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

    int year = BitcoinExchange::stoi(date.substr(0, 4));
    int month = BitcoinExchange::stoi(date.substr(5, 2));
    int day = BitcoinExchange::stoi(date.substr(8, 2));

    if (year < 1900 || year > 2100)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    return true;
}

int BitcoinExchange::stoi(std::string const &str)
{
    int result;
    std::stringstream convert;
    convert << str;
    convert >> result;
    return result;
}

double BitcoinExchange::stod(std::string const &str)
{
    double result;
    std::stringstream convert;
    convert << str;
    convert >> result;
    return result;
}

void BitcoinExchange::parseData(std::string const &line, bool isUser)
{
    size_t pos;

    if (line == "date | value" || line == "date,exchange_rate")
        return;
    if (isUser)
        pos = line.find('|');
    else
        pos = line.find(',');
    if (pos == std::string::npos)
    {
        std::cerr << "Error: bad input => " << line << std::endl;
        return;
    }
    std::string key = line.substr(0, pos);
    double value = stod(line.substr(pos + 1));
    if (isUser)
    {
        key = key.substr(0, key.size() - 1);
        if (!isDate(key))
        {
            std::cerr << "Error: bad input => " << key << std::endl;
            return;
        }
        checkValue(key, value);
    }
    else
        _btcHistory.insert(std::pair<std::string, double>(key, value));
}

void BitcoinExchange::loadData(std::string const &filename, bool isUser)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: Could not open file " + filename);

    std::string line;
    while (std::getline(file, line)) // getline can split the line
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