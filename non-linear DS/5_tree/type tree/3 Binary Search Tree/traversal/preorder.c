#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
}

void traversepreorder(struct node* root){
    if(root==NULL){
        return;
    }
    traversepreorder(root->left);
    traversepreorder(root->right);
    printf("%d->",root->data);
}

int main(){
    struct node* root=createnode(20);
    root->left=createnode(18);
    root->right=createnode(22);

    root->left->left=createnode(16);
    root->left->right=createnode(20);

    root->right->left=createnode(20);
    root->right->right=createnode(24);

    traversepreorder(root);
    return 0;
}