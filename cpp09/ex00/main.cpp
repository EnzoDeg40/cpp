/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:11:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 10:01:50 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "BitcoinExchange.hpp"

// read file
#include <fstream>
#include <string>


int main(int ac, char **av)
{
    BitcoinExchange exchange;

    if (ac != 2)
    {
        std::cerr << "Usage: ./btc [filename.csv]" << std::endl;
        return (1);
    }

    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file " << av[1] << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(file, line))
    {
        exchange.parseData(line);
    }
    exchange.printData();

    file.close();

    return (0);
}