/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:13:08 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/22 13:11:45 by edegraev         ###   ########.fr       */
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
    // TODO : use a map
    if (name == "shrubbery creation")
    {
        return new ShrubberyCreationForm(target);
    }
    else if (name == "robotomy request")
    {
        return new RobotomyRequestForm(target);
    }
    else if (name == "presidential pardon")
    {
        return new PresidentialPardonForm(target);
    }
    else
    {
        throw Intern::FormNotFoundException();
    }
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Error: form not found.";
}