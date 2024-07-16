/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:17:07 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/16 14:38:02 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    //todo a finir
    Weapon weapon;

    weapon.setType("banana");

    HumanA humanA("Enzo", weapon);
    humanA.attack();

}