#include <stdio.h> 
  
void printArray(int arr[]) 
{ 
    int arr_size = sizeof(arr) / sizeof(arr[0]);  
    for (i = 0; i < arr_size; i++) { 
        printf("%d ", arr[i]); 
    } 
} 
  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4 }; 
    printArray(arr); 
    return 0; 
} 
