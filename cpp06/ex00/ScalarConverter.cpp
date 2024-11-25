/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:03:47 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/25 13:16:57 by edegraev         ###   ########.fr       */
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
    if (str.size() == 1 && !isdigit(str[0]))
        return true;
    if (str.size() == 3 && str[0] == '\"' && str[2] == '\"')
        return true;
    return false;
}

bool ScalarConverter::isInt(const std::string str)
{
    if (str.empty())
        return false;

    bool isNegative = (str[0] == '-');
    bool isPositive = (str[0] == '+');
    size_t start = (isNegative || isPositive) ? 1 : 0;

    if (start == 1 && str.size() == 1)
        return false;

    for (size_t i = start; i < str.size(); ++i)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

void ScalarConverter::toChar(const std::string str)
{
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    if (isprint(c))
        std::cout << "char:   " << c << std::endl;
    else
        std::cout << "char:   unprintable" << c << std::endl;
    std::cout << "int:    " << i << std::endl;
    std::cout << "float:  " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(const std::string str)
{
    // char
    if (isChar(str))
    {
        std::cout << "isChar" << std::endl;
        toChar(str);
        return;
    }
    // int
    if (isInt(str))
    {
        std::cout << "isInt" << std::endl;
        // toInt(str);
        return;
    }
    // float
    // double
    std::cout << "Invalid" << std::endl;
}