/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:04:40 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/26 08:56:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

// #include <string.h>

class ScalarConverter
{
public:
    static void convert(const std::string str);

private:
    ScalarConverter();
    ~ScalarConverter();
    // copy
    // assignation

    static bool isChar(const std::string str);
    static bool isInt(const std::string str);
    static bool isFloat(const std::string str);

    static void toChar(const std::string str);
    static void toInt(const std::string str);

};


