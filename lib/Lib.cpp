/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lib.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:54:21 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/09 13:58:39 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lib.hpp"

Lib::Lib()
{
}

Lib::~Lib()
{
}

Lib::Lib(Lib const &src)
{
    *this = src;
}

Lib &Lib::operator=(Lib const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}


int Lib::stoi(std::string str)
{
    int result = 0;
    bool is_negative = false;

    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
    {
        is_negative = (str[i] == '-');
        ++i;
    }

    for (; i < str.length(); ++i)
    {
        char c = str[i];

        if (std::isdigit(c))
        {
            result = result * 10 + (c - '0');
        }
        else
        {
            throw std::invalid_argument("Invalid input: non-numeric character");
        }
    }

    return is_negative ? -result : result;
}

float Lib::stof(std::string str)
{
    float result = 0.0f;
    float decimal_divisor = 1.0f;
    bool is_negative = false;
    bool decimal_found = false;

    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
    {
        is_negative = (str[i] == '-');
        ++i;
    }

    for (; i < str.length(); ++i)
    {
        char c = str[i];

        if (c == '.')
        {
            if (decimal_found)
                throw std::invalid_argument("Invalid input: multiple decimal points");
            decimal_found = true;
        }
        else if (std::isdigit(c))
        {
            if (decimal_found)
            {
                decimal_divisor *= 10.0f;
                result += (c - '0') / decimal_divisor;
            }
            else
            {
                result = result * 10.0f + (c - '0');
            }
        }
        else
        {
            throw std::invalid_argument("Invalid input: non-numeric character");
        }
    }

    return is_negative ? -result : result;
}

double Lib::stod(std::string str)
{
    double result = 0.0;
    double decimal_divisor = 1.0;
    bool is_negative = false;
    bool decimal_found = false;

    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
    {
        is_negative = (str[i] == '-');
        ++i;
    }

    for (; i < str.length(); ++i)
    {
        char c = str[i];

        if (c == '.')
        {
            if (decimal_found)
                throw std::invalid_argument("Invalid input: multiple decimal points");
            decimal_found = true;
        }
        else if (std::isdigit(c))
        {
            if (decimal_found)
            {
                decimal_divisor *= 10;
                result += (c - '0') / decimal_divisor;
            }
            else
            {
                result = result * 10 + (c - '0');
            }
        }
        else
        {
            throw std::invalid_argument("Invalid input: non-numeric character");
        }
    }

    return is_negative ? -result : result;
}

std::string Lib::to_string(int n)
{
    std::string result;
    bool is_negative = n < 0;

    if (is_negative)
        n = -n;

    while (n > 0)
    {
        result = static_cast<char>(n % 10 + '0') + result;
        n /= 10;
    }

    if (is_negative)
        result = '-' + result;

    return result;
}
