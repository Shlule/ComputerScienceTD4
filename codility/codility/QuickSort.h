#pragma once
#include<vector>
class QuickSort
{
public:

	void swap(int& a, int& b);

	int Partition(std::vector<int>& vectorP, int start, int end);
	void execute(std::vector<int>& vectorP, int start, int end);

private:



};