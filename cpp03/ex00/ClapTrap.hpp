/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:25:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/05 15:46:58 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClassTrap {
	private:
		int hitPoints;
		int energyPoints;
		int attackDamage;

	public:
		// Constructeur
		ClassTrap();
		ClassTrap(const ClassTrap& other);

		// Opérateur d'affectation
		// ClassTrap& operator=(const ClassTrap& other);

		// Destructeur
		~ClassTrap();
};

#endif
