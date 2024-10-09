
#include <stdio.h> 

// recursive insertion sort 
void insertionSortRecursive(int arr[], int n) 
{ 
	if (n <= 1) 
		return; 

	insertionSortRecursive(arr, n - 1); 

	int last = arr[n - 1]; 
	int j = n - 2; 

	while (j >= 0 && arr[j] > last) { 
		arr[j + 1] = arr[j]; 
		j--; 
	} 
	arr[j + 1] = last; 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[] = { 11, 107, 14, 9, 6, 8 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSortRecursive(arr, n); 
	printArray(arr, n); 

	return 0; 
} 
