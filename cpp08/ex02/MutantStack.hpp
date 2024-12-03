/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:04:00 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/03 09:22:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
    MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack &operator=(MutantStack const &other);
	~MutantStack();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
    *this = other;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}