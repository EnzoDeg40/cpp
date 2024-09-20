/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:46 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/20 10:47:05 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal* animal = new Animal();
	// Animal* animal2 = new Animal(*animal);
	// delete animal;
	// delete animal2;
	// return (0);

	Dog* dog = new Dog();
	Cat* cat = new Cat();
	
	delete dog;
	delete cat;
}
