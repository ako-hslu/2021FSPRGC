#include <stdio.h>  

// Function to swap elements
static void swap(int *a, int *b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}   
// Selection Sort
void selectionSort(int array[], int n) 
{ 
	int i, j, min_element; 
	for (i = 0; i < n-1; i++) 
	{
		min_element = i; 
		for (j = i+1; j < n; j++) 
			if (array[j] < array[min_element]) 
				min_element = j; 
			swap(&array[min_element], &array[i]); 
	} 
}   


