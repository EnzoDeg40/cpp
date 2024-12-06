/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:54:21 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/06 20:51:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
// #include <string>
// #include <stdexcept>

class Lib
{
private:
    Lib();
    Lib(Lib const &src);
    Lib &operator=(Lib const &rhs);
public:
    ~Lib();

    static int stoi(std::string str);
    static float stof(std::string str);
    static double stod(std::string str);
};
