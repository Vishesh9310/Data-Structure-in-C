//separate chaining

#include<stdio.h>
#include<stdlib.h>
#define size 7

struct node{
    int data;
    struct node *next;
};

struct node* chain[size];

void init(){
    for(int i=0;i<size;i++){
        chain[i]=NULL;
    }
}

int hash_func(int value){
    return value % size;
}

void insert(int value){
    //create a newnode with value
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    //calculate hash key
    int key=hash_func(value);

    //check if chain[key] is empty
    if(chain[key]==NULL){
        chain[key]=newnode;
    }
    //collision
    else{
        //add the node at the end of chain[key]
        struct node* temp=chain[key];
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void print(){
    for(int i=0;i<size;i++){
        struct node *temp=chain[i];
        printf("Chain[%d]  ",i);
        while(temp){
            printf("%d   ",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main(){

    init();
    print();

    insert(6);
    insert(10);
    insert(12);
    print();


    return 0;
}