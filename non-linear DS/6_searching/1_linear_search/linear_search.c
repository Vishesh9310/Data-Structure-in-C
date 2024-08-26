//Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one.
//Every item is checked and if a match is found then that particular item is returned,
//otherwise the search continues till the end of the data collection.

#include<stdio.h>
#include<stdbool.h>

int main(){
    int value;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int check=true;


    printf("Enter value:");
    scanf("%d",&value);

    for(int i=0;i<size;i++){
        if(value==arr[i]){
            printf("%d is found, %d index\n",value,i);
            check=false;
            break;
        }
    }
    
    if(check==true){
        printf("%d is not found...\n",value);
    }
    return 0;
}