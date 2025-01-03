/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:52:05 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 01:44:30 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe pmergeMe;
    
    if (ac < 2)
    {
        std::cerr << "Usage: " << av[0] << " [number1] [number2] ... [numberN]" << std::endl;
        return 1;
    }

    std::vector<int> array;
    for (int i = 1; i < ac; i++)
    {
        int n = atoi(av[i]);
        if (n < 0)
        {
            std::cerr << "Error: " << av[i] << " is not a positive number." << std::endl;
            return 1;
        }
        array.push_back(n);
    }
    pmergeMe.print(array, "Before: ");
    pmergeMe.sort(array);
    pmergeMe.print(array, "After: ");
    pmergeMe.time(array);

    return 0;
}