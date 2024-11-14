/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:23:44 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/14 15:41:14 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file("shrubbery_creation_shrubbery");
    if (!file.is_open())
    {
        std::cerr << "Error: could not open the file." << std::endl;
        return;
    }

    // Écrit un arbre ASCII dans le fichier
    file << "       ccee88oo\n"
            "  C8O8O8Q8PoOb o8oo\n"
            " dOB69QO8PdUOpugoO9bD\n"
            "CgggbU8OU qOp qOdoUOdcb\n"
            "    6OuU  /p u gcoUodpP\n"
            "      \\\\//  /douUP\n"
            "        \\\\////\n"
            "         |||/\\\n"
            "         |||\\/\n"
            "         |||||\n"
            "   .....//||||....\n";

    file.close();
}