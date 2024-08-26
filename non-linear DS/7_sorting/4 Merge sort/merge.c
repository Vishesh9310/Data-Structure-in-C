//Merge sort is one of the most popular sorting alogrithms that is based on the priciple of divide and conquer algorithmn
//merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray,
//and then merging the sorted subarrays back together to form the final sorted array.

/*
step 1: initialize the array
step 2: find the size of array then pass value in merge_sort function according to (arr, left=0, right=sizeofarray-1)
step 3: if left> right so return otherwise find mid and recurse merge_sort funtion 2 time Example: 1. merge_sort(arr,left,mid); 2. merge_sort(arr,mid+1,right);
step 4: call merge function "merge(arr,left,mid,right);"

merge function:
step 1: merge two subarray in arr, first is arr[left to mid] and second is arr[mid+1 to right]
step 2: create temporary arrays
step 3: copy data to temporary arrays
step 4: merge the temporary arrays back into arr[left to right]
step 5: copy the remaining elements of left array
step 6: copy the remaining elements of right array
*/

#include<stdio.h>

void merge(int arr[],int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;

    int arrleft[n1];
    int arrright[n2];

    for(int i=0;i<n1;i++){
        arrleft[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        arrright[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(arrleft[i]<=arrright[j]){
            arr[k]=arrleft[i];
            i++;
            k++;
        }else{
            arr[k]=arrright[j];
            j++;
            k++;
        }
    }
    while(i < n1){
        arr[k]=arrleft[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k]=arrright[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int left,int right){
    if(left<right){
    int mid=left+(right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
    merge(arr,left,mid,right);
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

    merge_sort(arr,0,n-1);

    printarray(arr,n);

    return 0;
}