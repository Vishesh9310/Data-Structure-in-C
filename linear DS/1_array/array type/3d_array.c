#include<stdio.h>

int main(){
    int arr[3][3][3];
    int value;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("Enter value of index arr[%d][%d][%d]:",i,j,k);
                scanf("%d",&value);
                arr[i][j][k]=value;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}