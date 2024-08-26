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

void dequeue(){
    if(front==-1){
        printf("Underflow...\n");
        return;
    }else{
        for(int i=front;i<=rear;i++){
            queue[i]=queue[i+1];
            // if(i==rear){
            //     printf("\ndelete element...\n");
            // }
        }
        rear--;
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    printf("\nbefore deleting element in the queue...\n");
    print_queue();

    dequeue();

    printf("\nafter deleting element in the queue...\n");
    print_queue();

    printf("\n");
    enqueue();

    printf("\nbefore deleting element in the queue...\n");
    print_queue();

    return 0;
}