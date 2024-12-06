/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:09 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 13:35:55 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <stack>
#include <string>

class RPN
{
private:

public:
    RPN();
    ~RPN();
    RPN(RPN const &src);
    RPN &operator=(RPN const &rhs);

    void parsing(std::string av);
};
