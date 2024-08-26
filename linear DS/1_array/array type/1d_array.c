#include<stdio.h>

int main(){
    int arr[]={12,23,45,75,23,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}