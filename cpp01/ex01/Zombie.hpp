/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:10:40 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 08:54:24 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        void setName(std::string name);
    private:
        std::string _name;
};
