/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:38:48 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/06 22:46:26 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <stdio.h>

ClapTrap::ClapTrap() : _hitPoints(100), _energyPoints(100), _attackDamage(30), _name("unnamed")
{
	std::cout << "Construct ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    // todo mettre message et review code ?
	std::cout << "Copy ClapTrap " << other._name << " on " << _name << std::endl;  
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
        _name = other._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Unconstruct ClapTrap " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    // if(_energyPoints < 1)
    // {
    //     // std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    //     // message erreure
    //     return;
    // }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

std::string ClapTrap::getName()
{
    return _name;
}