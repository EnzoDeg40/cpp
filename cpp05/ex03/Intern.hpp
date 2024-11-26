/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:13:08 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/26 14:12:50 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    ~Intern();

    AForm* makeForm(std::string const name, std::string const target);

    class FormNotFoundException : public std::exception
    {
        const char *what() const throw();
    };
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string const name, std::string const target)
{
    AForm* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    for (int i = 0; i < 3; i++)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }

    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Error: form not found.";
}