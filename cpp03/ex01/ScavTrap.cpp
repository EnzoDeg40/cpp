/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:38 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/11 14:23:39 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap() : ClapTrap("unnamed", 100, 50, 20)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _name = "unnamed";
    std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _name = name;
    std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << _name << " is born by copy" << std::endl;
}

// Operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
        _name = other._name;
    }
    std::cout << "ScavTrap " << _name << " is born by affectation" << std::endl;
    return *this;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is dead" << std::endl;
}

// Member function
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}
