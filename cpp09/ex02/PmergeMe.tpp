/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:25:51 by edegraev          #+#    #+#             */
/*   Updated: 2025/01/03 20:58:08 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/**
 * @brief Construct a new PmergeMe::PmergeMe object
 * 
 * @tparam T The type of the list elements.
 * @param list The list to print.
 * @param message The message to print before the list.
 */
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
void PmergeMe::insertSort(T &list, int left, int right)
{
    // sort the list from left to right
    for (int i = left + 1; i <= right; i++)
    {
        int key = list[i];
        int j = i - 1;

        // move elements most bigger than key to the right
        while (j >= 0 && list[j] > key)
        {
            list[j + 1] = list[j];
            j = j - 1;
        }

        // insert key in the right place
        list[j + 1] = key;
    }
}

template <typename T>
void PmergeMe::merge(T &list, int left, int middle, int right)
{
    int number1 = middle - left + 1;
    int number2 = right - middle;

    typename T::value_type left_array[number1];
    typename T::value_type right_array[number2];

    // copy numbers from list to left_array and right_array
    for (int i = 0; i < number1; i++)
        left_array[i] = list[left + i];
    for (int i = 0; i < number2; i++)
        right_array[i] = list[middle + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;
    
    // merge (and sort) the two arrays
    while (i < number1 && j < number2)
    {
        if (left_array[i] <= right_array[j])
        {
            list[k] = left_array[i];
            i++;
        }
        else
        {
            list[k] = right_array[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of left_array
    while (i < number1)
    {
        list[k] = left_array[i];
        i++;
        k++;
    }

    // copy the remaining elements of right_array
    while (j < number2)
    {
        list[k] = right_array[j];
        j++;
        k++;
    }
}

template <typename T>
void PmergeMe::mergeSort(T &list, int left, int right)
{
    int limit = 10;
    
    // use insert sort if the list is small
    if (right - left + 1 <= limit)
    {
        insertSort(list, left, right);
        return;
    }

    // else use merge sort recursively
    int middle = (left + right) / 2;
    mergeSort(list, left, middle);
    mergeSort(list, middle + 1, right);
    merge(list, left, middle, right);
}

/**
 * @brief Sorts a list of elements using the Ford-Johnson algorithm (merge-insert).
 * 
 * @tparam T The type of the list elements.
 * @param list The list to sort.
 * @return double The time taken to sort the list in microseconds.
 */
template <typename T>
double PmergeMe::sort(T& list)
{
    std::clock_t start = std::clock();

    mergeSort(list, 0, list.size() - 1);

    std::clock_t end = std::clock();

    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
    // double elapsed_microseconds = elapsed_time * 1e6;

    return elapsed_time;
}
