/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:07:18 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/08 23:10:51 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    this->setType("(null)");
}

Weapon::~Weapon(void)
{
    
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}
