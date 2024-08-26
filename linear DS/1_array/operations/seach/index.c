//search value through index
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int index;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter index:");
    scanf("%d",&index);
    if(index>size){
        printf("invalid index...");
    }
    
    for(int i=0;i<size;i++){
        if(i==index){
            printf("index[%d]=%d",i,arr[i]);
            break;
        }
    }

    return 0;
}