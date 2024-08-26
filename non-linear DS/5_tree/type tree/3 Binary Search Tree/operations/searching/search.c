#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

void traverse_inorder(struct node* root){
    if(root==NULL){
        return;
    }
    traverse_inorder(root->left);
    printf("%d ",root->data);
    traverse_inorder(root->right);
}

struct node *insert(struct node* root, int value){
    if(root==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(value < root->data){
        root->left=insert(root->left,value);
    }else if(value > root->data){
        root->right=insert(root->right, value);
    }
    return root;
}

struct node *search(struct node *root, int value){
    if(root==NULL||root->data==value){
        return root;
    }
    if(root->data < value){
        return search(root->right,value);
    }
    return search(root->left,value);
}

int main(){
    int search_value;
    struct node *root=NULL;
    root=insert(root,43);
    insert(root,65);
    insert(root,32);
    
    traverse_inorder(root);
    printf("\nEnter number:");
    scanf("%d",&search_value);

    if(search(root,search_value)==NULL){
        printf("%d is not found...\n",search_value);
    }else{
        printf("%d is found...\n",search_value);
    }

    return 0;
}