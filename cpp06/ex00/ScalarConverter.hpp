/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:04:40 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/25 13:33:45 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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

    static void toChar(const std::string str);
    static void toInt(const std::string str);

};


