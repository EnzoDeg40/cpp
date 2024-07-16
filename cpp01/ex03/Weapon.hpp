/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:05:32 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/08 22:49:03 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    public:
        Weapon();
        ~Weapon(void);
        void setType(std::string type);
        std::string const &getType(void);
    private:
        std::string _type;
};
