/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:28:03 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/08 23:07:53 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->_name = name;
    std::cout << "HumanA " << name << " created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}
