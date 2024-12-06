/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:18 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 10:10:34 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange
{
private:
    std::map<std::string, double> _btcHistory;
    
    void parseData(std::string const &line, bool isUser);
    void checkValue(std::string data, double nbBtc);
    bool isDate(std::string date);
    bool isDatePrevious(std::string dateBtc, std::string dateUser);
    
    static double stod(std::string const &str);
    static int stoi(std::string const &str);

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &src);
    BitcoinExchange &operator=(BitcoinExchange const &rhs);

    void loadData(std::string const &filename, bool isUser);
};
