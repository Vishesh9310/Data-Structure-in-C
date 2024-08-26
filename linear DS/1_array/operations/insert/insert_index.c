//insert value on the given index
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int length=size-1;
    int value,index;

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter index:");
    scanf("%d",&index);

    if(index>size-1){
        printf("Invalid index...");
    }else{
        printf("Enter value:");
        scanf("%d",&value);
        if(index==length){
            for(int i=0;i<size;i++){
                if(i==length){
                    arr[size]=value;
                    break;
                }
            }
           
            for(int i=0;i<=size;i++){
                printf("%d ",arr[i]);
            }
        }else{
            
            for(int i=size;i>=0;i--){
                arr[i]=arr[i-1];
                if(i==index){
                    arr[i]=value;
                    break;
                }
            }
            for(int i=0;i<=size;i++){
                printf("%d ",arr[i]);
            }
        }

        
    }

    return 0;
}