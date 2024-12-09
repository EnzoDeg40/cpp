#include <iostream>
#include <list>

// std::list<int> insertSort(std::list<int> originalList)
// {
//     std::list<int> sortedList;

//     for (std::list<int>::iterator itOriginal = originalList.begin(); itOriginal != originalList.end(); ++itOriginal)
//     {
//         // find the right position to insert the element in sortedList
//         std::list<int>::iterator itSorted = sortedList.begin();
//         while (itSorted != sortedList.end() && *itSorted < *itOriginal)
//         {
//             ++itSorted;
//         }
//         sortedList.insert(itSorted, *itOriginal);
//     }

//     return sortedList;
// }

void printList(std::list<int> &list)
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// add all numbers of maximaList to minimaList with insertSort algorithm
void insertSort(std::list<int> &minimaList, std::list<int> &maximaList)
{
    for (std::list<int>::iterator itMaxima = maximaList.begin(); itMaxima != maximaList.end(); ++itMaxima)
    {
        // find the right position to insert the element in minimaList
        std::list<int>::iterator itMinima = minimaList.begin();
        while (itMinima != minimaList.end() && *itMinima < *itMaxima)
        {
            ++itMinima;
        }
        minimaList.insert(itMinima, *itMaxima);
    }
}

int main()
{
    // supose minimaList is sorted
    std::list<int> minimaList;
    minimaList.push_back(1);
    minimaList.push_back(3);
    minimaList.push_back(5);
    minimaList.push_back(7);

    // supose maximaList is not sorted
    std::list<int> maximaList;
    maximaList.push_back(10);
    maximaList.push_back(9);
    maximaList.push_back(8);

    insertSort(minimaList, maximaList);

    printList(minimaList);

    return 0;
}
