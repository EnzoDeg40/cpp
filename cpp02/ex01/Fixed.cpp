/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:19:10 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/15 14:41:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*   ex00                                                                     */
/* ************************************************************************** */

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator = (Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

/* ************************************************************************** */
/*   ex01                                                                     */
/* ************************************************************************** */

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = value << this->n_fract_bits;
	// std::cout << "Fixed point value: " << this->fixed_point_value << std::endl;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	// this->fixed_point_value = roundf(input * (1 << this->n_fract_bits));
	this->fixed_point_value = toInt() << this->n_fract_bits;
	// std::cout << "Fixed point value: " << this->fixed_point_value << std::endl;
}

int Fixed::toInt(void) const
{
	// return (this->fixed_point_value >> this->n_fract_bits);
}

float Fixed::toFloat(void) const
{
	// return ((float)this->fixed_point_value / (1 << this->n_fract_bits));
}
