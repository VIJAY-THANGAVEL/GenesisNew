#include <stdio.h> 

void printArray(int arr[], int arr_size)
{ 
    int i; 
    for (i = 0; i < arr_size; i++) { 
        printf("%d ", arr[i]); 
    } 
} 
  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4 }; 
    int arr_size = sizeof(arr) / sizeof(arr[0]);  
    printArray(arr, arr_size); 
    return 0; 
} 
