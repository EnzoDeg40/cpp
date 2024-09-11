/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:41 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/11 10:33:04 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    std::string _name;

public:
    // Constructor
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    // Operator
    ScavTrap &operator=(const ScavTrap &other);
    // Destructor
    ~ScavTrap();
    // Member function
    void guardGate();
};

#endif