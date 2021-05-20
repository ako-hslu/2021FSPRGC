#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "insertionsort.h"
#include "bubblesort.h"
#include "selectionsort.h"
#include "mergesort.h"

#define NUMS 10000

int array[NUMS];


void shuffleArray(int elements[], int size) {
	
	// initialize the array with integer sequence 
	for (int i = 0; i < size; ++i)
		elements[i] = i;

	for (int i = size - 1; i > 0; --i) 
	{
		// generate random index
		int w = rand()%i;
		// swap items
		int t = elements[i];
		elements[i] = elements[w];
  		elements[w] = t;
	}
}

// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

// Main Function 
int main() 
{ 
	printf("Number of elements %d\n\n", NUMS);
	clock_t begin = clock();
	shuffleArray(array, NUMS);
	clock_t end = clock();
	printf("Shuffing time: %.6f\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
	
	begin = clock();
	insertionSort(array, NUMS); 
	end = clock();
	printf("Insertion Sort: %.6f\n\n", (double)(end - begin) / CLOCKS_PER_SEC);

	shuffleArray(array, NUMS);

	begin = clock();
	bubbleSort(array, NUMS); 
	end = clock();
	printf("Bubble Sort: %.6f\n\n", (double)(end - begin) / CLOCKS_PER_SEC);

	shuffleArray(array, NUMS);

	begin = clock();
	selectionSort(array, NUMS); 
	end = clock();
	printf("Selection Sort: %.6f\n\n", (double)(end - begin) / CLOCKS_PER_SEC);
	
	shuffleArray(array, NUMS);

	begin = clock();
	mergeSort(array, 0, NUMS-1); 
	end = clock();
	printf("Merge  Sort: %.6f\n\n", (double)(end - begin) / CLOCKS_PER_SEC);

	return 0; 
}
