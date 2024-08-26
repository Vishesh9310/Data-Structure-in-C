//Initialize: all index initialize as -1 before insertind data element.

#include<stdio.h>

#define size 7
int arr[size];

int main(){
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}