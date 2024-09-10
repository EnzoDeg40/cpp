/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:38 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/10 21:12:10 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructeur par défaut

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

// // Affectation
// ScavTrap &ScavTrap::operator=(const ScavTrap &other)
// {
//     if (this != &other)
//     {
//         _hitPoints = other._hitPoints;
//         _energyPoints = other._energyPoints;
//         _attackDamage = other._attackDamage;
//         _name = other._name;
//     }
//     std::cout << "ScavTrap " << _name << " is born by affectation" << std::endl;
//     return *this;
// }

// // Recopie
// ScavTrap::ScavTrap(const ScavTrap &other)
// {
//     *this = other;
//     std::cout << "ScavTrap " << _name << " is born by copy" << std::endl;
// }

// // Destructor
// ScavTrap::~ScavTrap()
// {
//     std::cout << "ScavTrap " << _name << " is dead" << std::endl;
// }

// void ScavTrap::guardGate()
// {
//     std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
// }
