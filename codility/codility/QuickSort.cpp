#include "QuickSort.h"
using namespace std;

void QuickSort::swap(int& a, int& b) {
	float t = a;
	a = b;
	b = t;
}

int QuickSort::Partition(vector<int>& vectorP, int start, int end) {

	//initialize pivot index default at the end of the Partition of array
	int pivotIndex = end - 1;
	//get pivot value to compare between other value
	int pivotValue = vectorP[pivotIndex];

	// je parcour mon tableau
	for (size_t i = start; i <= pivotIndex; i++) {
		//si je trouve un element plus grand que la valeur de mon pivot
		if (vectorP[i] > pivotValue) {

			//j'echange la place de mon pivot avec ma valeur tester
			swap(vectorP[i], vectorP[pivotIndex]);
			// je reEcahnger avec l'avant derniere valeur  pour faire en sorte 
			//que mon pivot a avancer de 1 place 
			//je me retrouve donc avec le pivot qui a avancer de 1 place,
			// ma valeur tester plus grande qui se trouve derrire mon pivot.
			swap(vectorP[i], vectorP[pivotIndex - 1]);
			// je decremente de i de 1 pour que je teste mon pivot avec la nouvelle valeur de l'index deja tester
			i--;
			pivotIndex--;

		}
	}
	return pivotIndex;

}

void QuickSort::execute(std::vector<int>& vectorP, int start, int end)
{
	//verify if start index is smaller that end idex
	if (start < end) {
		// searching the good index for our pivot in the Array
		int pivot = Partition(vectorP, start, end);

		//reExecute the function for the sub Arrays
		execute(vectorP, start, pivot);
		execute(vectorP, pivot + 1, end);
	}
}
