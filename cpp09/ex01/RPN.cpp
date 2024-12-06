/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:36:00 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 13:37:57 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void RPN::parsing(std::string av)
{
    std::stack<std::string> tokens;
    std::string expression = av;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (token != "+" && token != "-" && token != "*" && token != "/" && !std::isdigit(token[0]))
        {
            throw std::invalid_argument("Invalid token: " + token);
        }

        tokens.push(token);
    }
}

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN &RPN::operator=(RPN const &rhs)
{
    if (this != &rhs)
    {
    }
    return (*this);
}