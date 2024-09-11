/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:18:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/11 15:57:26 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Test 1" << std::endl;
    ScavTrap scavTrap("Enzo");
    scavTrap.guardGate();
    std::cout << std::endl;

    std::cout << "Test 2" << std::endl;
    ScavTrap scavTrap2 = scavTrap;
    scavTrap2.guardGate();
    std::cout << std::endl;

    std::cout << "Test 3" << std::endl;
    ScavTrap scavTrap3("Hugo");
    scavTrap3 = scavTrap;
    scavTrap3.guardGate();
    std::cout << std::endl;

    std::cout << "Test 4" << std::endl;
    ScavTrap scavTrap4;
    scavTrap4 = scavTrap;
    scavTrap4.guardGate();
    std::cout << std::endl;

    std::cout << "Test end" << std::endl;
    std::cout << std::endl;

    return (0);
}