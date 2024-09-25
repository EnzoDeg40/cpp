/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:00:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/25 09:51:16 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);
	ScavTrap(const ScavTrap& other);
	
	void guardGate();
};