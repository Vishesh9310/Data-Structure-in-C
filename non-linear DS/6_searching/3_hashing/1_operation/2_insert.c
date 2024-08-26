#include<stdio.h>

#define size 7
int arr[size];

int hash_func(int value){
    int key = value % size;
    return key;
}

int main(){
    int value;
    //before inserting elements into array. let's make array default value as -1,
    //-1 indicates element not present or the particular index is available to insert.
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }

    //inserting elements.
    for(int i=0;i<size;i++){
        printf("Enter value:");
        scanf("%d",&value);
        int index=hash_func(value);
        arr[index]=value;
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}