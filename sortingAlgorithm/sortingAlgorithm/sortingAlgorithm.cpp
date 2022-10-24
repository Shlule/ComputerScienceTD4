// sortingAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"QuickSort.h"
#include <iostream>

void displayArray(std::vector<float>& vectorP) {
    for (int i = 0; i < vectorP.size(); i++) {
        std::cout << vectorP[i] << '\n';
    }
}
int main()
{
    std::vector<float> myList = { 5,2,8,1,4,3,7,6,6,5,8,1,3,4,7,5,4 };
    QuickSort quicksort;
    quicksort.execute(myList, 0, myList.size());
    displayArray(myList);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
