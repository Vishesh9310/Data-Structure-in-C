#include<stdio.h>
#include<stdlib.h>

#define max 10
int stack[max-1];
int size=sizeof(stack)/sizeof(stack[0]);
int top=-1;

void push(){
    int value;
    if(top==size){
        printf("Overflow");
    }else{
        printf("Enter data:");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}

void traverse(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    push();
    push();
    push();

    traverse();
    
    return 0;
}