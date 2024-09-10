/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:38:48 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/10 21:11:34 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <stdio.h>

ClapTrap::ClapTrap() : _hitPoints(100), _energyPoints(100), _attackDamage(30), _name("unnamed")
{
	std::cout << "Construct ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage), _name(name)
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
    if (_energyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " can't attacks" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 1)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << "'s HP is " << _hitPoints << " (-" << amount << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " can't be repaired" << std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    if (_hitPoints < 0)
        _hitPoints = 0; 
    std::cout << "ClapTrap " << _name << "'s HP is " << _hitPoints << " (+" << amount << ")" << std::endl;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

std::string ClapTrap::getName()
{
    return _name;
}