/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:11:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 10:59:42 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "BitcoinExchange.hpp"




int main(int ac, char **av)
{
    BitcoinExchange exchange;

    if (ac != 2)
    {
        std::cerr << "Usage: ./btc [filename.csv]" << std::endl;
        return (1);
    }

    exchange.loadData(av[1]);
    
    return (0);
}