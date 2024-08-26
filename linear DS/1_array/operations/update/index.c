//update value through index
#include<stdio.h>

int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int index,value;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter index:");
    scanf("%d",&index);
    
    if(index>size-1){
        printf("invalid index...\n");
    }else{
        printf("Enter value:");
        scanf("%d",&value);
        for(int i=0;i<size;i++){
            if(index==i){
                arr[index]=value;
            }
        }
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}