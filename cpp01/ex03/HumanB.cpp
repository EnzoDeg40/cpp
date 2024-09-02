/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:41:52 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 09:28:01 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << "HumanB " << this->_name << " created with ";
    std::cout << _weapon.getType() << std::endl;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    std::cout << "Weapon set to " << weapon.getType() << std::endl;
    this->_weapon = weapon;
}