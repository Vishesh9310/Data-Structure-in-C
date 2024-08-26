// in this insertion code i was build 3 function for node insertion and one function for printing list and a structure method and a main funtion .
//insertion: 1)insert at beginning, 2)insert at ending, 3) insert in the middle.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void print_list(struct node* head);
void insert_begin(struct node** head,int value);
void insert_middle(struct node** head,int index,int value);
void insert_end(struct node** head,int value);

int main(){
    struct node* head=NULL;

    //insert value at the end

    insert_end(&head,45);
    insert_end(&head,65);
    insert_end(&head,85);

    print_list(head);
    
    //insert value at the begin

    insert_begin(&head,35);
    insert_begin(&head,25);
    insert_begin(&head,15);

    print_list(head);

    //insert value in middle using indexing
    int values,index;
    printf("Enter index:");
    scanf("%d",&index);
    printf("Enter value:");
    scanf("%d",&values);
    insert_middle(&head,index,values);

    print_list(head);

    return 0;
}

void print_list(struct node *head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insert_begin(struct node** head,int value){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->next=*head;
    temp->data=value;
    *head=temp;
}

void insert_middle(struct node** head, int index, int value){
    if(head==NULL){
        printf("Underflow...\n");
    }else{
        int count=0;
        struct node* post=*head;
        struct node* pre=NULL;
        struct node* new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=value;
        new_node->next=NULL;
        while(count!=index){
            pre=post;
            post=post->next;
            count++;
        }
        new_node->next=post;
        pre->next=new_node;
    }
}

void insert_end(struct node** head,int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct node* current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
}