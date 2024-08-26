#include<stdio.h>
#include<stdbool.h>

#define size 7
int arr[size];

int hash_func(int value){
    return value % size;
}

void isempty(){
    bool check=true;
    for(int i=0;i<size;i++){
        if(arr[i] != -1){
            check=false;
            break;
        }
        check=true;
    }
    if(check!=true){
        printf("\narray is not empty...\n");
    }else{
        printf("\narray is empty...\n");
    }
}

int main(){
    int value,index;

    //initialize
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }

    //check array when array is empty
    isempty();

    //insert data in array
    for(int i=0;i<size;i++){
        printf("Enter value:");
        scanf("%d",&value);
        index=hash_func(value);
        arr[index]=value;
    }

    //print array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    //check array when array is not empty
    isempty();

    return 0;
}