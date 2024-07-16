/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:41:52 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/08 22:53:38 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "HumanA " << name << " created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanB::~HumanB(void)
{

}

void attack(void)
{
    
}