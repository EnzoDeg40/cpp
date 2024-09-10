/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:41 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/10 21:10:40 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    // Default constructor
    // ScavTrap();
    ScavTrap(std::string name);
    // Copy constructor
    // ScavTrap(const ScavTrap &other);
    // // Assignment operator
    // ScavTrap &operator=(const ScavTrap &other);
    // // Destructor
    // ~ScavTrap();

    // void guardGate();
};
