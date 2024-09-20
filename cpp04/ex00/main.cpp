/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:46 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/20 13:27:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal* animal = new Animal();
	// animal->makeSound();

	// Dog* dog = new Dog();
	// Cat* cat = new Cat();

	// dog->makeSound();
	// cat->makeSound();
	
	// delete dog;
	// delete cat;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
}
