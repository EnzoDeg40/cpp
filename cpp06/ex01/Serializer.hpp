/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:14:47 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/28 15:42:55 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"

#include <iostream>
#include <string>
#include <stdint.h>

class Serializer
{
public:
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

private:
    Serializer();
    ~Serializer();
    // copy
    // assignation
};

