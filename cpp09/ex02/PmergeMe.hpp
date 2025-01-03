/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:25:51 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 11:37:58 by edegraev         ###   ########.fr       */
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

    void insertSort(std::vector<int> &list, int left, int right);
    void merge(std::vector<int> &list, int left, int middle, int right);
    void mergeSort(std::vector<int> &list, int left, int right);

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &copy);
    
    template <typename T> void print(T &list, std::string message);
    void sort(std::vector<int> &list);
    void time(std::vector<int> &list);
};

#include "PmergeMe.tpp"