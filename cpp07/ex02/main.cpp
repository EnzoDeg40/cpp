/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:57:34 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 09:05:20 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> a(5);
    Array<int> b(5);

    for (unsigned int i = 0; i < 5; i++)
    {
        a[i] = i;
        b[i] = i + 5;
    }

    std::cout << "Array a: ";
    try
    {
        for (unsigned int i = 0; i < 5; i++)
        {
            std::cout << a[i] << " ";
        }

        std::cout << std::endl << "Array b: ";
        for (unsigned int i = 0; i < 5; i++)
        {
            std::cout << b[i] << " ";
        }

        std::cout << std::endl << "Test out of range: ";
        std::cout << a[6] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    

    return (0);
}