/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:38:48 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/05 15:47:07 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassTrap.hpp"

ClassTrap::ClassTrap() : hitPoints(100), energyPoints(100), attackDamage(30)
{

}

ClassTrap::ClassTrap(const ClassTrap& other)
{
	*this = other;
}

ClassTrap &ClassTrap::operator=(const ClassTrap& other)
{
	if (this != &other)
	{
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

ClassTrap::~ClassTrap()
{

}