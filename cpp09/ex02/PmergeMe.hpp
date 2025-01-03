/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:25:51 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 11:57:39 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class PmergeMe
{
private:
    double _time;

    template <typename T> void insertSort(T &list, int left, int right);
    template <typename T> void merge(T &list, int left, int middle, int right);
    template <typename T> void mergeSort(T &list, int left, int right);

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &copy);
    
    template <typename T> void print(T &list, std::string message);
    template <typename T> void sort(T &list);
    template <typename T> void time(T &list);
};

#include "PmergeMe.tpp"