/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:52:05 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 12:39:25 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
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
    std::deque<int> array2;
    for (int i = 1; i < ac; i++)
    {
        int n = atoi(av[i]);
        if (n < 0)
        {
            std::cerr << "Error: " << av[i] << " is not a positive number." << std::endl;
            return 1;
        }
        array.push_back(n);
        array2.push_back(n);
    }
    pmergeMe.print(array, "Before: ");
    double result1 = pmergeMe.sort(array);
    double result2 = pmergeMe.sort(array2);
    pmergeMe.print(array, "After: ");

    std::cout << "Time to process a range of " << array.size() << " elements with vector: " << result1 << " µs" << std::endl;
    std::cout << "Time to process a range of " << array2.size() << " elements with deque: " << result2 << " µs" << std::endl;

    return 0;
}