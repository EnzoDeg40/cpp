/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:41 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/09 09:24:58 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScavTrap
{
private:
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	std::string _name;

public:
	ScavTrap(std::string name);
	~ScavTrap();
};
