/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:35:25 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/09 11:38:59 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
    (void)argv;
    if (argc != 4)
    {
        std::cout << "sed file string1 string2" << std::endl;
        return 1;
    }

    return 0;
}