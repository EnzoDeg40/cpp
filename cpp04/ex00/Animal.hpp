/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:25:56 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/20 13:26:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	void makeSound() const;
	std::string getType() const;
};

