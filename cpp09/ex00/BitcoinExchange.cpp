/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:06 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 18:24:28 by edegraev         ###   ########.fr       */
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
        // copy attributes here
    }
    return (*this);
}

void BitcoinExchange::parseData(std::string const &line)
{
    size_t pos = line.find(',');
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
    _data.insert(std::pair<std::string, float>(key, value));
}

void BitcoinExchange::printData()
{
    for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void BitcoinExchange::loadData(std::string const &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: Could not open file " + filename);
        
    std::string line;
    while (std::getline(file, line))
    {
        parseData(line);
    }

    file.close();
}