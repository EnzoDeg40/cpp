/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:48:08 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/09 13:59:03 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <string>
#include <stdexcept>

#include "Lib.hpp"

int main()
{
    try
    {
        std::string input = "-1234.56";
        double value = Lib::stod(input);
        std::cout << "String: " << input << "\nDouble: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        std::string input = "-1234.56";
        float value = Lib::stof(input);
        std::cout << "String: " << input << "\nFloat: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        int input = -1234;
        std::string value = Lib::to_string(input);
        std::cout << "Int: " << input << "\nString: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}