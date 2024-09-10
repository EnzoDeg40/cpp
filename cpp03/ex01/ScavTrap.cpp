/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:38 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/10 16:28:18 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructeur par défaut
ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _energyPoints(50), _attackDamage(20), _name(name)
{
    // todo remove
    (void)_hitPoints;
    (void)_energyPoints;
    (void)_attackDamage;
}

// Affectation
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
        _name = other._name;
    }
    return *this;
}

// Recopie
ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
}

// Destructor
ScavTrap::~ScavTrap()
{
}
