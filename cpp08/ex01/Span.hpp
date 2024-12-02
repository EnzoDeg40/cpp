/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:43:33 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 20:52:33 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>

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
    int shortestSpan();
    int longestSpan();
    
};

