/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:03:47 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/26 09:36:02 by edegraev         ###   ########.fr       */
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
        std::cout << "char:   unprintable" << std::endl;
    std::cout << "int:    " << i << std::endl;
    std::cout << "float:  " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void ScalarConverter::toInt(const std::string str)
{
    int i = atoi(str.c_str());
    float f = static_cast<float>(i);

    if (isprint(i))
    {
        char c = static_cast<char>(i);
        std::cout << "char:   " << c << std::endl;   
    }
    else
        std::cout << "char:   unprintable" << std::endl;

    std::cout << "int:    " << i << std::endl;
    std::cout << "float:  " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << i << std::endl;
}

bool ScalarConverter::isFloat(const std::string str)
{
    if (str.empty())
        return false;

    bool isNegative = (str[0] == '-');
    bool isPositive = (str[0] == '+');
    size_t start = (isNegative || isPositive) ? 1 : 0;

    if (start == 1 && str.size() == 1)
        return false;

    bool hasDot = false;
    for (size_t i = start; i < str.size(); ++i)
    {
        if (str[i] == '.')
        {
            if (hasDot)
                return false;
            hasDot = true;
        } 
        else if (!isdigit(str[i]))
            return false;
    }
    return true;
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
        toInt(str);
        return;
    }
    // float
    if (isFloat(str))
    {
        std::cout << "isFloat" << std::endl;
        // toFloat(str);
        return;
    }
    // double
    std::cout << "Invalid" << std::endl;
}