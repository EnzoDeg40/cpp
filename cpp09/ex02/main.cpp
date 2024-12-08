/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:52:05 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/07 12:01:10 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>


void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &array)
{
    (void)left;
    (void)right;
    (void)array;

    // right.size() ??
    int leftSize = array.size() / 2;
    int rightSize = array.size() - leftSize;
    
    
}

void mergeSort(std::vector<int> &array)
{

    int len = array.size();
    if (len <= 1)
        return;
    int mid = len / 2;
    
    // affiche le tableau
    // std::cout << "Tableau : ";
    // for (size_t i = 0; i < array.size(); ++i)
    // {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    std::vector<int> left(array.begin(), array.begin() + mid);
    std::vector<int> right(array.begin() + mid, array.end());

    for (int i; i < len; i++)
    {
        if (i < mid)
        {
            left.push_back(array[i]);
        }
        else
        {
            right.push_back(array[i]);
        }
    }

    // affichage des deux tableaux
    // std::cout << "Tableau gauche : ";
    // for (size_t i = 0; i < left.size(); ++i)
    // {
    //     std::cout << left[i] << " ";
    // }

    // std::cout << std::endl;
    // std::cout << "Tableau droit : ";
    // for (size_t i = 0; i < right.size(); ++i)
    // {
    //     std::cout << right[i] << " ";
    // }

    mergeSort(left);
    mergeSort(right);
    merge(left, right, array);
}

int main()
{
    int numbers_array[] = {8, 2, 5, 3, 4, 7, 6, 1};
    std::vector<int> array(numbers_array, numbers_array + sizeof(numbers_array) / sizeof(int));

    std::cout << "Liste originale : ";
    for (size_t i = 0; i < array.size(); ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    mergeSort(array);

    return 0;
}