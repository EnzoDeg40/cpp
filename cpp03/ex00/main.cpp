/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:18:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/06 22:46:47 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap;
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3;

    clapTrap3 = clapTrap2;

    clapTrap.setName("Hugo");
    

    clapTrap.attack("Enzo");

    return (0);
}