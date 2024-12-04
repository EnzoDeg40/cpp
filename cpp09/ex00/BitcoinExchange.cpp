/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:06 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 09:12:25 by edegraev         ###   ########.fr       */
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
    // std::cout << line << std::endl;
    size_t pos = line.find(',');
    if (pos != std::string::npos)
    {
        std::string key = line.substr(0, pos);
        // float value = stof(line.substr(pos + 1));
        std::string value = line.substr(pos + 1);
        // _data[key] = value;
        _data.insert(std::pair<std::string, std::string>(key, value));
        std::cout << key << " => " << value << std::endl;
    }
}
