/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:03:47 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/25 09:58:11 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

bool ScalarConverter::isChar(const std::string str)
{
    if (str.size() == 1)
        return true;
    if (str.size() == 3 && str[0] == '\"' && str[2] == '\"')
        return true;
    return false;
}


void ScalarConverter::convert(const std::string str)
{
	// char
    if(isChar(str))
        std::cout << "isChar" << std::endl;
	// int
	// float
	// double
    std::cout << "End" << std::endl;
}