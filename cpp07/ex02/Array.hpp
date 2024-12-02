/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:27:54 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 08:54:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array();
    ~Array();
    Array(Array const &src);
    Array &operator=(Array const &rhs);

    Array(unsigned int n);
};

#include "Array.tpp"