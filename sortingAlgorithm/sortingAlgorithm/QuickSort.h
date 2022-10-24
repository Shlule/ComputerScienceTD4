#pragma once
#include<vector>
class QuickSort
{
public:
	QuickSort(){}
	~QuickSort() {}

	void swap(int* a, int* b);

	int Partition(std::vector<float>& vectorP, int start, int end);
	void execute(std::vector<float>& vectorP, int start, int end);

private:


	
};

