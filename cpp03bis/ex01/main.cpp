/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:53:12 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/25 10:01:51 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrap claptrap("Enzo");
    // ClapTrap claptrap2(claptrap);
    // ClapTrap claptrap3 = claptrap;

    ScavTrap scavtrap("Hugo");
    scavtrap.takeDamage(1000);
    scavtrap.attack("Enzo");
    scavtrap.guardGate();

    ScavTrap scavtrap2("idk");
    scavtrap2 = scavtrap;
    scavtrap2.guardGate();

    return 0;
}