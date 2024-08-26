#include<stdio.h>

int main(){
    int arr[3][3];
    int value;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter value of index arr[%d][%d]:",i,j);
            scanf("%d",&value);
            arr[i][j]=value;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}