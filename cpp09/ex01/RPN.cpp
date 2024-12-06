/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:36:00 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 15:16:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void RPN::parsing(const std::string& av)
{
    std::stack<int> tokens; // Pile d'entiers pour simplifier
    std::istringstream iss(av);
    std::string token;

    while (iss >> token)
    {
        if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1))
        {
            tokens.push(std::atoi(token.c_str()));
            continue;
        }

        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (tokens.size() < 2)
            {
                throw std::invalid_argument("Invalid expression: not enough operands");
            }

            // Récupère les deux derniers opérandes
            int b = tokens.top(); tokens.pop();
            int a = tokens.top(); tokens.pop();

            // Applique l'opération
            if (token == "+") tokens.push(a + b);
            else if (token == "-") tokens.push(a - b);
            else if (token == "*") tokens.push(a * b);
            else if (token == "/")
            {
                if (b == 0)
                {
                    throw std::runtime_error("Division by zero");
                }
                tokens.push(a / b);
            }
            continue;
        }

        throw std::invalid_argument("Invalid token: " + token);
    }

    if (tokens.size() != 1)
    {
        throw std::invalid_argument("Invalid expression: unbalanced tokens");
    }

    std::cout << "Result: " << tokens.top() << std::endl;
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