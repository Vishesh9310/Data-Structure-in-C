// removing an element from a seprate chaining

#include<stdio.h>
#include<stdlib.h>

#define size 7

struct node{
    int data;
    struct node* next;
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
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    int key=hash_func(value);

    if(chain[key]==NULL){
        chain[key]=newnode;
    }else{
        struct node* temp=chain[key];
        while(temp){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void print(){
    for(int i=0;i<size;i++){
        struct node* temp=chain[i];
        printf("Chain[%d]  ",i);
        while(temp){
            printf("%d   ",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int remove(int value){

    int key=hash_func(value);

    struct node *temp=chain[key],*dealloc;
    if(temp!=NULL){
        if(temp->data==value){
            dealloc=temp;
            temp=temp->next;
            free(dealloc);

        }else{
            while(temp->next){
                if(temp->next->data==value){
                    dealloc=temp->next;
                    temp->next=temp->next->next;
                    free(dealloc);
                    return 1;
                }
                temp=temp->next;
            }
        }
    }
    return 0;
}

int main(){

    init();
    print();

    insert(12);
    insert(6);
    insert(10);
    
    print();
    
    int value;
    printf("\nEnter value:");
    scanf("%d",&value);
    remove(value);
    print();
    

    return 0;
}