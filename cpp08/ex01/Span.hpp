/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:43:33 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 15:13:58 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;
public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(Span const &rhs);
    Span &operator=(Span const &rhs);

    void addNumber(int n);
    // int shortestSpan();
    // int longestSpan();
    
};

