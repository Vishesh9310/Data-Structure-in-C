//Binary Search is defined as a searching algorithm used in a sorted array by repeactedly dividing the search interval in half.
//The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N).

//rule 1: array must be sorted in a ascending order.

#include<stdio.h>

int binary_search(int arr[],int value,int low,int high){
    while(low<=high){
      int mid= low + (high - low)/2;
      if(arr[mid]==value){
        return mid;
      }else if(arr[mid]<value){
        low=mid+1;
      }else{
        high=mid-1;
      }
    }
    return -1;
}

int main(){
    int value;
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
    }
    printf("\nEnter value:");
    scanf("%d",&value);

    int result=binary_search(arr,value,0,size-1);

    if(result==-1){
      printf("Value not found...\n");
    }else{
      printf("Value is found on index:%d\n",result);
    }

    return 0;
}