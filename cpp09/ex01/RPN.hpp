/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:09 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 15:41:27 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

class RPN
{
private:
    int applyOperation(const std::string &op, int a, int b);
    bool isNumber(const std::string &token);
    void processToken(const std::string &token, std::stack<int> &tokens);

public:
    RPN();
    ~RPN();
    RPN(RPN const &src);
    RPN &operator=(RPN const &rhs);

    void parsing(const std::string &av);
};
