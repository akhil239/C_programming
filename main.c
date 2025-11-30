#include <stdio.h>

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

int main() {
    
    return 0;
}
