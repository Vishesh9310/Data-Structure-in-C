//insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
//Insertion sort works similarly as we sort cards in our hand in a card game.

#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int size){
    int j,key;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    int size=sizeof(arr)/sizeof(arr[0]);

    printarray(arr,size);

    insertion_sort(arr,size);

    printarray(arr,size);

    return 0;
}