//insert value on the upper bond
#include<stdio.h>

int main(){
    int arr[]={0,1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int length=size-1;//when we are on the last-1 index so we need to put value on the last index that's why we use length variable in this
    int value;
    printf("Enter value:");
    scanf("%d",&value);

    for(int i=0;i<size;i++){
        if(i==length){
            arr[size]=value;
            break;
        }
    }

    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}