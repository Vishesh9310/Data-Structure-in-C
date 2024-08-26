//Bubble sort is a simple algorithm which is used to sort a given set of n elements provided in form of an array with n number of elements.
//Bubble sort compares all the element one by one and sort them based on their values.

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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

    bubble_sort(arr,size);

    printarray(arr,size);

    return 0;
}