/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/22 11:13:39 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Enzo", 1);
    (void)bureaucrat;

    ShrubberyCreationForm shrubberyCreationForm("test1");
    RobotomyRequestForm robotomyRequestForm("test2");
    PresidentialPardonForm presidentialPardonForm("test3");
        
    bureaucrat->signForm(shrubberyCreationForm);
    bureaucrat->signForm(robotomyRequestForm);
    bureaucrat->signForm(presidentialPardonForm);
    
    shrubberyCreationForm.execute(*bureaucrat);
    robotomyRequestForm.execute(*bureaucrat);
    presidentialPardonForm.execute(*bureaucrat);

    bureaucrat->executeForm(shrubberyCreationForm);
    bureaucrat->executeForm(robotomyRequestForm);
    bureaucrat->executeForm(presidentialPardonForm);

    // Intern someRandomIntern;
    // Form* rrf;
    // rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    
	return 0;
}