//delete value though value
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int value;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter value:");
    scanf("%d",&value);
    
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
        }
    }

    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}