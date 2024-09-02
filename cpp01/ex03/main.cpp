/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:17:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 09:20:20 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    //todo a finir
    Weapon weapon;

    weapon.setType("banana");

    HumanA humanA("Enzo", weapon);
    humanA.attack();

    weapon.setType("pomme");
    humanA.setWeapon(weapon);
    humanA.attack();

    HumanB humanB("Julien");
    humanB.attack();

    weapon.setType("poire");
    humanB.setWeapon(weapon);
    humanB.attack();
}