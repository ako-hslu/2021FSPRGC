#include <math.h> 
#include <stdio.h>

int ascending = 1;
   
// Insertion Sort Function
void insertionSort(int array[], int n) 
{ 
	int i, element, j; 
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];  // temp copy of the element in the array
		j = i - 1; 
		// compare "element" to its neighbor to the left
		while (j >= 0 && array[j] > element)  // compare elemet
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}	 
}
   


