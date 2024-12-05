/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:11:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/05 09:51:52 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "BitcoinExchange.hpp"




int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
        {
            std::cerr << "Usage: ./btc [filename]" << std::endl;
            return 1;
        }

        BitcoinExchange exchange;
        exchange.loadData("data.csv", false);
        exchange.loadData(av[1], true);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}