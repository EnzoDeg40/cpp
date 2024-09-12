/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:25:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/12 14:49:27 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdio.h>

class ClapTrap
{
private:
protected:
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    std::string _name;

public:
    // Constructeur
    ClapTrap();

    ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
    ClapTrap(const ClapTrap &other);

    // Opérateur d'affectation
    ClapTrap &operator=(const ClapTrap &other);

    // Destructeur
    ~ClapTrap();

    // Fonctions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string name);
    std::string getName();
};

#endif
