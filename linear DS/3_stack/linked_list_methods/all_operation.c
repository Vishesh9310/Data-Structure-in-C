#include<stdio.h>
#include<stdlib.h>

#define max 10
int top=-1;

struct node{
    int data;
    struct node* next;
};

struct node* rare;

struct node* push(){
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(top==-1){
        newnode->data=value;
        newnode->next=NULL;
        rare=newnode;
    }else if(top==max-1){
        printf("Overflow...\n");
    }else{
        newnode->data=value;
        newnode->next=rare;
        rare=newnode;
    }
    top++;
}

void pop(){
    if(top==-1){
        printf("Undeflow...\n");
    }else if(top==max-1){
        printf("Overflow...\n");
    }else{
        struct node* pre=rare;
        rare=rare->next;
        free(pre);
        top--;
    }
}

void isempty(){
    if(top==-1){
        printf("is empty...\n");
    }else{
        printf("is not empty...\n");
    }
}

void isfull(){
    if(top==max-1){
        printf("is full...\n");
    }else if(top==-1){
        printf("is empty....\n");
    }else{
        printf("is not full...\n");
    }
}

void istop(){
    printf("top value is: %d\n",rare->data);
}

void search(){
    if(top==-1){
        printf("Underflow...\n");
    }else{
        int value;
        struct node* temp=rare;
        printf("Enter value:");
        scanf("%d",&value);
        while(temp!=NULL){
            if(temp->data==value){
                printf("Value %d is found in stack.\n",value);
            }
            temp=temp->next;
        }
    }
}

void traverse(){
    struct node* temp=rare;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    while(1){
        int choice;
        printf("Enter choice:\n1: for push\n2: for pop\n3: for traverse\n4: for top\n5: for isempty\n6: for isfull\n7: for search\n\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            istop();
            break;
        case 5:
            isempty();
            break;
        case 6:
            isfull();
            break;
        case 7:
            search();
            break;
        default:
            printf("Invalid choice");
        }
    }


    return 0;
}