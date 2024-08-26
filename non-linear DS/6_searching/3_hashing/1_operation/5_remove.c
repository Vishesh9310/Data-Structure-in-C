#include<stdio.h>

#define size 7
int arr[size];

int hash_func(int value){
    int key = value % size;
    return key;
}

void remove_ele(int ele){
    int key= ele%size;
    if(arr[key]==ele){
        arr[key]=-1;
    }
}

int main(){
    int value;
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

    //traverse array before deletion
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    //removing element.
    int search_value;
    printf("\nEnter searching value:");
    scanf("%d",&search_value);
    remove_ele(search_value);

    //traverse array after deletion
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}