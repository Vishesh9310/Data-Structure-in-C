//delete value through index
#include<stdio.h>
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int index;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter index:");
    scanf("%d",&index);
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}