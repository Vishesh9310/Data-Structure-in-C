#include<stdio.h>
#include<stdbool.h>

#define size 7
int arr[size];

void init(){
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }
}

int hash_func(int value){
    int key=value % size;
    return key;
}

void print(int ar[]){
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}

void insertion(){
    int value;
    printf("\n");
    for(int i=0;i<size;i++){
        printf("Enter number:");
        scanf("%d",&value);
        int index=hash_func(value);
        arr[index]=value;
    }
}

void searching(){
    int value;
    printf("\nEnter value:");
    scanf("%d",&value);
    int key=hash_func(value);
    if(arr[key]==value){
        printf("\nvalue is found on index:%d\n",key);
    }else{
        printf("\nvalue is not found\n");
    }
}

void isempty(){
    bool check=true;
    for(int i=0;i<size;i++){
        if(arr[i]!=-1){
            check=false;
        }
    }
    if(check==true){
        printf("\narray is empty...\n");
    }else{
        printf("\narray is not empty...\n");
    }

}

void deletion(){
    int value;
    printf("\nEnter value");
    scanf("%d",&value);
    arr[hash_func(value)]=-1;
}

int main(){

//initialize
    init();

    //traversing
    print(arr);

//insertion
    insertion();

    //traversing
    print(arr);

//searching
    searching();

//is empty
    isempty();

//deletion
    deletion();

    //traversing
    print(arr);

    return 0;
}