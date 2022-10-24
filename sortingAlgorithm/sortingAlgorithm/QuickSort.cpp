#include "QuickSort.h"
using namespace std;

void QuickSort::swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int QuickSort::Partition(vector<float>& vectorP, int start, int end) {

	//initialize pivot index default at the end of the Partition of array
	int pivotIndex = end-1;
	//get pivot value to compare between other value
	int pivotValue = vectorP[pivotIndex];

	// je parcour mon tableau
	for (int i = start; i <= pivotIndex; i++) {
		//si je trouve un element plus grand que la valeur de mon pivot
		if (vectorP[i] > pivotValue) {

			float tampon = vectorP[i];
			vectorP.erase(vectorP.begin()+i);
			vectorP.emplace(vectorP.begin()+pivotIndex, tampon);
			pivotIndex--;

		}
	}
	return pivotIndex;

}

void QuickSort::execute(std::vector<float>& vectorP, int start, int end)
{
	//verify if start index is smaller that end idex
	if (start < end) {
		// searching the good index for our pivot in the Array
		int pivot = Partition(vectorP, start, end);

		//reExecute the function for the sub Arrays
		execute(vectorP, start, pivot);
		execute(vectorP, pivot+1, end);
	}
}
