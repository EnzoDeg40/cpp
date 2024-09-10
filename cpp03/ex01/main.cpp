/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:18:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/10 18:40:23 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Test 1" << std::endl;
    ScavTrap scavTrap("ScavTrap");
    scavTrap.guardGate();

    std::cout << "Test 2" << std::endl;
    ScavTrap scavTrap2 = scavTrap;
    scavTrap2.guardGate();

    std::cout << "Test 3" << std::endl;
    ScavTrap scavTrap3("ScavTrap3");
    scavTrap3 = scavTrap;
    scavTrap3.guardGate();

    std::cout << "End of tests" << std::endl;

    return (0);
}