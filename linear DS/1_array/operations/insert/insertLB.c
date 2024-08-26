//insert value on the lower bond
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    for(int i=size;i>=0;i--){
        arr[i]=arr[i-1];
        if(i==0){
            arr[i]=value;
        }
    }
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}