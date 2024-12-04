/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:19:18 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 09:11:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>

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

    void parseData(std::string const &line);
};

