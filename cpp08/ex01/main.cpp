/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:54:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 20:53:07 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(1);
    sp.addNumber(2);
    sp.addNumber(3);
    sp.addNumber(4);
    sp.addNumber(5);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    return (0);
}