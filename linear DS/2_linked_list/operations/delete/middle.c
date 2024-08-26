//delete middle node

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void print_list(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node* dlt_middle(struct node* head,int key){
    if(head==NULL){
        printf("Underflow...");
    }else{
        struct node* pre_ptr=NULL;
        struct node* current_ptr=head;
        struct node* next_ptr=NULL;

        while(current_ptr->next!=NULL){
            pre_ptr=current_ptr;
            next_ptr=current_ptr->next->next;
            current_ptr=current_ptr->next;

            if(current_ptr->data==key){
                pre_ptr->next=next_ptr;
                free(current_ptr);
                break;
            }

            //print test...
            /* printf("preptr:%d\n",pre_ptr->data);
            printf("curre:%d\n",current_ptr->data);
            if(next_ptr==NULL){
                printf("null...\n");
            }else{
                printf("next:%d\n\n",next_ptr->data);
            }*/
        }
    }
}

int main(){
    int key;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 32;
    head->next = first;
    first->data = 56;
    first->next = second;
    second->data = 62;
    second->next = third;
    third->data = 26;
    third->next = fourth;
    fourth->data = 65;
    fourth->next = NULL;

    print_list(head);
    printf("Enter value");
    scanf("%d",&key);
    dlt_middle(head,key);
    print_list(head);

    return 0;
}