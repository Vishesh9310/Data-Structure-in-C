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

void search(){
    int value;
    if(top==-1){
        printf("stack is empty...\n");
    }else{
        printf("Enter value:");
        scanf("%d",&value);
        for(int i=top;i>=0;i--){
            if(stack[i]==value){
                printf("Value is founded, value:%d index is:%d\n",stack[i],i);
            }
        }
    }
}

void update_stack(){
    int value,new_value;
    if(top==-1){
        printf("stack is empty...\n");
    }else{
        printf("Enter value:");
        scanf("%d",&value);
        printf("Enter new value:");
        scanf("%d",&new_value);
        for(int i=top;i>=0;i--){
            if(stack[i]==value){
                printf("Value is founded, value:%d index is:%d\n",stack[i],i);
                stack[i]=new_value;
                break;
            }
        }
    }
}

int main(){
    push();
    push();
    push();
    push();
    push();

    traverse();

    search();
    
    return 0;
}