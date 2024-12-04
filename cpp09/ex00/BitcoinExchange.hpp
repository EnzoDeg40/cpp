/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:18 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 10:59:47 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>

class BitcoinExchange
{
private:
    // std::map<std::string, float> _data;
    std::map<std::string, std::string> _data;
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &src);
    BitcoinExchange &operator=(BitcoinExchange const &rhs);

    void loadData(std::string const &filename);
    void parseData(std::string const &line);
    void printData();
};

