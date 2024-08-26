//Heap sort is a comparison bsed sorting technique based on binary Heap data strcture.
//It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning.
//Repeat the same process for the remaining elements.

#include <stdio.h>
  
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){   
    int arr[]={12,23,34,54,6,23,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    printarray(arr,n);

    heapSort(arr,n);

    printarray(arr,n);

    return 0;
}