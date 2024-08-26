#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, * right;
};

struct node* insert(struct node* root,int value){
    if(root==NULL){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->right=temp->left=NULL;
        return temp;
    }
    if(value < root->data){
        root->left=insert(root->left,value);
    }else if(value > root->data){
        root->right= insert(root->right, value);
    }
    return root;
}

void traverse_inorder(struct node* root){
    if(root==NULL){
        return;
    }
    traverse_inorder(root->left);
    printf("%d->",root->data);
    traverse_inorder(root->right);
}

int main(){
    struct node* root=NULL;
    root=insert(root,43);
    insert(root,67);
    insert(root,56);

    traverse_inorder(root);

    return 0;
}