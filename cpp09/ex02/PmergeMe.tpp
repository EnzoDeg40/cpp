/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:25:51 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 11:38:05 by edegraev         ###   ########.fr       */
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