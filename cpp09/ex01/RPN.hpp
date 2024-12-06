/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:09 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 15:32:41 by edegraev         ###   ########.fr       */
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

public:
    RPN();
    ~RPN();
    RPN(RPN const &src);
    RPN &operator=(RPN const &rhs);

    
    void parsing(const std::string& av);
    void processToken(const std::string& token, std::stack<int>& tokens);

};
