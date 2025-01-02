/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:52:05 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 00:10:30 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> &list, std::string message = "List : ")
{
    std::cout << message;
    for (size_t i = 0; i < list.size(); ++i)
    {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

void insertSort(std::vector<int> &list, int left, int right)
{
    (void)left;
    (void)right;
    (void)list;

    print(list, "Insert list : ");
}

void merge(std::vector<int> &list, int left, int middle, int right)
{
    (void)list;
    (void)left;
    (void)middle;
    (void)right;
    
    print(list, "Merge list : ");
}

void mergeSort(std::vector<int> &list, int left, int right)
{
    int limit = 8; // 8 is a random number
    
    if (right - left + 1 <= limit)
    {
        insertSort(list, left, right);
        return;
    }

    int middle = (left + right) / 2;
    mergeSort(list, left, middle);
    mergeSort(list, middle + 1, right);
    merge(list, left, middle, right);
}

void sort(std::vector<int> &list)
{
	mergeSort(list, 0, list.size() - 1);
}

int main()
{
    int numbers_array[] = {8, 2, 5, 3, 4, 7, 6, 1};
    std::vector<int> array(numbers_array, numbers_array + sizeof(numbers_array) / sizeof(int));

    print(array, "Before sort : ");
    sort(array);
    print(array, "After sort : ");

    return 0;
}