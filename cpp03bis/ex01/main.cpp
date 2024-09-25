/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:53:12 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/25 09:17:48 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Enzo");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3 = claptrap;

    ScavTrap scavtrap("Hugo");

    return 0;
}