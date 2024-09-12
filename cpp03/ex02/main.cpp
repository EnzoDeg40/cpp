/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:18:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/12 15:23:17 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap enzo("Enzo", 100, 100, 30);
	ClapTrap hugo("Hugo", 100, 100, 30);
	ClapTrap samuel("Samuel", 100, 100, 30);
	ScavTrap anthony("Anthony");
	FragTrap sarah("Sarah");

	enzo.attack("Maxime");
	enzo.attack("Julien");
	enzo.attack("Fabrice");
	enzo.takeDamage(5);
	hugo.takeDamage(9);
	hugo.takeDamage(10);
	samuel.beRepaired(10);
	samuel.takeDamage(19);
	anthony.attack("Lylou");
	anthony.takeDamage(99);
	anthony.beRepaired(50);
	anthony.guardGate();
	sarah.attack("Alexis");
	sarah.takeDamage(99);
	sarah.beRepaired(50);
	sarah.highFivesGuys();

    return (0);
}