#include<stdio.h>
#include<stdlib.h>

#define max 10
int queue[max];
int front=-1,rear=-1;

void enqueue(){
    if(rear==max-1){
        printf("Overflow...\n");
    }else{
        int value;
        printf("Enter value:");
        scanf("%d",&value);
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
    }
}

void print_queue(){
    if(rear==-1){
        printf("underflow...\n");
    }else{
        for(int i=rear;i>=front;i--){
        printf("%d ",queue[i]);
    }
    }
}

int main(){
    enqueue();
    enqueue();

    print_queue();
    return 0;
}