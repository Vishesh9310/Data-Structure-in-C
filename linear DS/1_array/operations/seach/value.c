//search value through given value
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int value;
    bool find=false;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter value:");
    scanf("%d",&value);
    
    for(int i=0;i<size;i++){
        if(value==arr[i]){
            printf("index[%d]=%d",i,arr[i]);
            find=true;
            break;
        }
    }
    if(find==false){
        printf("value not found...");
    }

    return 0;
}