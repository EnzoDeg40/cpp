/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:33:10 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 08:57:58 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->_array;
}

template <typename T>
Array<T>::Array(Array const &src)
{
    *this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        this->_size = rhs._size;
        this->_array = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
        {
            this->_array[i] = rhs._array[i];
        }
    }
    return (*this);
}
