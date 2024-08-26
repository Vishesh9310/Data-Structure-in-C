#include<stdio.h>

#define size 7
int arr[size];

int hash_func(int value){
    int key = value % size;
    return key;
}

int find(int ele){
    int key= ele%size;
    if(arr[key]==ele){
        return key;
    }else{
        return -1;
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

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    //searching element.
    int search_value;
    printf("\nEnter searching value:");
    scanf("%d",&search_value);

    int index_s=find(search_value);

    if(index_s==-1){
        printf("\nvalue is not found...\n");
    }else{
        printf("\nvalue is found on index:%d\n",index_s);
    }
    
    return 0;
}