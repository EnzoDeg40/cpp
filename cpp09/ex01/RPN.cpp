/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:36:00 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 15:42:43 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool RPN::isNumber(const std::string &token)
{
    if (token.empty())
        return false;
    if (token[0] == '-' || token.size() > 1)
        return false;
    return std::isdigit(token[0]);
}

int RPN::applyOperation(const std::string &op, int a, int b)
{
    if (op == "+")
        return a + b;
    if (op == "-")
        return a - b;
    if (op == "*")
        return a * b;
    if (op == "/")
    {
        if (b == 0)
            throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::invalid_argument("Unsupported operation: " + op);
}

void RPN::processToken(const std::string &token, std::stack<int> &tokens)
{
    if (isNumber(token))
    {
        tokens.push(std::atoi(token.c_str()));
        return;
    }

    if (token == "+" || token == "-" || token == "*" || token == "/")
    {
        if (tokens.size() < 2)
        {
            throw std::invalid_argument("Invalid expression: not enough operands");
        }

        int b = tokens.top();
        tokens.pop();
        int a = tokens.top();
        tokens.pop();

        applyOperation(token, a, b);
        return;
    }

    throw std::invalid_argument("Invalid token: " + token);
}

void RPN::parsing(const std::string &av)
{
    std::stack<int> tokens;
    std::istringstream iss(av);
    std::string token;

    while (iss >> token)
        processToken(token, tokens);

    if (tokens.size() != 1)
        throw std::invalid_argument("Invalid expression: unbalanced tokens");

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