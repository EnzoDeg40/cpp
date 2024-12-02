/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:13:59 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 20:35:03 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &rhs)
{
    *this = rhs;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _v = rhs._v;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}
