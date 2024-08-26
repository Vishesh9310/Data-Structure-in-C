//update value through value
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int new_value,value;
    int find=1;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter value:");
    scanf("%d",&value);

    for(int i=0;i<size;i++){
        if(arr[i]==value){
            printf("Enter new value:");
            scanf("%d",&new_value);
            arr[i]=new_value;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}