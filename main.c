#include <stdio.h>
#include<stdlib.h>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void linearsort(int arr[] , int n){
  for(int i = 0; i < n; i++){
    for (int j = i+1 ; j < n ; j++){
      if( arr[i]< arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
// Driver code to test the insertion sort
void insertion(int array[],int size){
  for(int i = 0; i < size;i++){
    int key  = array[i];
    int j = i -1;
    while (j >= 0 && array[j] > key){
      array[j+1] = array[j];
      j= j- 1;
    }
    array[j+1] = key;
  }
}
int main() {
  int arr[]= {23654,3525,624,4247,723,546,6435,4367,565,53,5,34,5,525,2324532};
  int size = sizeof(arr)/sizeof(arr[0]);
  insertion(arr,size);
  printArray(arr,size);
  
    return 0;
}
