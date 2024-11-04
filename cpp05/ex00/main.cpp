/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/04 12:50:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("B1", 1);
		std::cout << b1.getName() << " has a grade of " << b1.getGrade() << std::endl;
		b1.incrementGrade();
		std::cout << b1.getName() << " has a grade of " << b1.getGrade() << std::endl;
		b1.incrementGrade();
		std::cout << b1.getName() << " has a grade of " << b1.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat b2("B2", 150);
		std::cout << b2.getName() << " has a grade of " << b2.getGrade() << std::endl;
		b2.decrementGrade();
		std::cout << b2.getName() << " has a grade of " << b2.getGrade() << std::endl;
		b2.decrementGrade();
		std::cout << b2.getName() << " has a grade of " << b2.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat b3("B3", 0);
		std::cout << b3.getName() << " has a grade of " << b3.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat b4("B4", 151);
		std::cout << b4.getName() << " has a grade of " << b4.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
	
}