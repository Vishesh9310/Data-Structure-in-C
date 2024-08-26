//Quick sort is a sorting algorithm based on the divide and conquer algorithm that picks an element as a pivot and partitions the given
//array around the picked pivot by placing the pivot in its correct position in the sorted array.

#include<stdio.h>
#include<stdlib.h>

//swapping func
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[],int start, int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[end]);

    return (i+1);
}

void quick_sort(int arr[],int start,int end){
    //base case
    if(start >= end){
        return;
    }
    //partioning
    int p=partition(arr,start,end);
    //recursion
    //left part sort
    quick_sort(arr,start,p-1);
    //right part sort
    quick_sort(arr,p+1,end);
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

    quick_sort(arr,0,n-1);

    printarray(arr,n);

    return 0;
}

/*
int partition(int arr[],int start, int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //pivot right place
    int pivotindex=start+count;
    swap(arr[pivotindex],arr[start]);

    int i=start,j=end;
    while(i<pivotindex && j> pivotindex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i+1],arr[j-1]);
        }
    }
    return pivotindex;
}*/