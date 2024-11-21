/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/21 14:24:51 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Enzo", 1);
    (void)bureaucrat;

    ShrubberyCreationForm shrubberyCreationForm("test1");
    RobotomyRequestForm robotomyRequestForm("test2");
    
    bureaucrat->signForm(shrubberyCreationForm);
    shrubberyCreationForm.execute(*bureaucrat);
    robotomyRequestForm.execute(*bureaucrat);

	return 0;
}