/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:25:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/06 21:54:36 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		// Constructeur
		ClapTrap();
		ClapTrap(const ClapTrap& other);

		// Opérateur d'affectation
		ClapTrap& operator=(const ClapTrap& other);

		// Destructeur
		~ClapTrap();

		// Fonctions
		// void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);
		
};

#endif
