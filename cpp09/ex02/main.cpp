/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:52:05 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 00:46:44 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include "PmergeMe.hpp"

int main()
{
    PmergeMe pmergeMe;
    
    int numbers_array[] = {8, 2, 5, 3, 4, 7, 6, 1, 9, 0, 10};
    std::vector<int> array(numbers_array, numbers_array + sizeof(numbers_array) / sizeof(int));

    pmergeMe.print(array, "Before sort : ");
    pmergeMe.sort(array);
    pmergeMe.print(array, "After sort : ");

    return 0;
}