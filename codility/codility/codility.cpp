// codility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<bitset>
#include<vector>
#include<map>
#include<algorithm>
#include"QuickSort.h"

QuickSort quicksort;

int BitGap(int N) {
    std::string binary = std::bitset<32>(N).to_string();
    std::cout << binary<<'\n';

    int cpt{ 0 };
    int max{ 0 };
    int firstOne = binary.find('1');

    for (auto i = binary.begin()+firstOne; i != binary.end(); i++) {
        if (*i == '0') {
            cpt++;

        }
        else {
            if (max < cpt) {
                max = cpt;
            }
            cpt = 0;
        }

    }

    return max;
}

std::vector<int> CyclicRotation(std::vector<int>& vectorP, int k) {
    if (k == vectorP.size()) {
        return vectorP;

    }
    if (vectorP.size() != 0) {
        for (int i = 0; i < k; i++) {

            int temp = *(vectorP.end() - 1);
            vectorP.erase(vectorP.end() - 1);
            vectorP.emplace(vectorP.begin(), temp);
        }
    }
    
    
    return vectorP;
}


bool IsSorted(std::vector<int> vectorP) {
    if (vectorP.size() != 0) {
        int cpt{ 0 };
        for (auto i = vectorP.begin(); i != (vectorP.end()-1); i++) {

            if (*i > *(vectorP.begin()+cpt + 1)) {
                return false;

            }
            cpt++;
        }
        return true;
    }
    
}

int oddOccurencesInArray(std::vector<int> vectorP) {
    // testing if list is already sorted
    if (!IsSorted(vectorP)) {
    
        std::sort(vectorP.begin(), vectorP.end());

    }   

    for (auto i = vectorP.begin(); i != (vectorP.end()-1); i+=2) {

        if (*i != *(i + 1)) {
           return *i;
        }
    }

    

    

}

int FrogJump(int x, int y, int d) {
    if (x < y) {

        int distance = y - x;
        if (distance == 0) {
            return 0;
        }
        if (distance % d==0) {
            return distance / d;
        }
        else {
            return distance / d + 1;
        }

        
    }
    return 0;
}

int PermMissingElem(std::vector<int> vectorP) {
    if (vectorP.empty()) {
        return 1;
    }
    if (vectorP.size() == 1 && *(vectorP.end() - 1) != 1) {
        return 1;
    }
    std::sort(vectorP.begin(), vectorP.end());
    int cpt{ 1 };

    for (auto i = vectorP.begin(); i != vectorP.end(); i++) {
        if (*i != cpt) {
            return cpt;
        }
        cpt++;
    }
}

int main()
{
    std::vector<int> v{ 2,3,1,5,4,6,8,9};
    std::vector<int> w{ 1,2,3,5,9,10 };
    std::vector<int> x{ 9,3,9,3,9,7,9 };

    std::cout << PermMissingElem(v);
    /*CyclicRotation(v, 3);
    for (auto i = v.begin(); i != v.end() ; i++) {
        std::cout << *i;
    }*/

    
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
