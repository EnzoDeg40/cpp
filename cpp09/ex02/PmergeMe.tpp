/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:25:51 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 11:45:57 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void PmergeMe::print(T &list, std::string message)
{
    std::cout << message;
    for (size_t i = 0; i < list.size(); ++i)
    {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void PmergeMe::sort(T& list)
{
    std::clock_t start = std::clock();

    mergeSort(list, 0, list.size() - 1);

    std::clock_t end = std::clock();

    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;
    double elapsed_microseconds = elapsed_time * 1e6;
    _time = elapsed_microseconds;

    // std::cout << "Time: " << elapsed_microseconds << " µs" << std::endl;
}

template <typename T>
void PmergeMe::time(T& list)
{
    // std::cout << "Time: " << _time << " µs" << std::endl;
    std::cout << "Time to process a range of " << list.size() << " elements with std::vector<int>: " << _time << " µs" << std::endl;
}
