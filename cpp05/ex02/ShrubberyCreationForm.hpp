/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:13:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/14 15:41:06 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    /* data */
protected:
    void action() const;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();

};
