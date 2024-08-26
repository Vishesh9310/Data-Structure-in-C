//delete last node

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node *dlt_end(struct node *head)
{
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        struct node *current = head;
        struct node *pre = NULL;
        while (current->next != NULL)
        {
            pre = current;
            current=current->next;
        }
        pre->next=NULL;
        free(current);
    }
}

int main()
{
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

    dlt_end(head);

    print_list(head);

    return 0;
}