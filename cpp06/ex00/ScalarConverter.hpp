/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:04:40 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/25 11:37:43 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

};


