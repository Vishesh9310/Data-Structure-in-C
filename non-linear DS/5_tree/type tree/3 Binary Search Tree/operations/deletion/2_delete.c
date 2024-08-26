//second approach for deleting data in BST

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

struct node* createnode(struct node* root,int value){
    if(root==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(value > root->data){
        root->right=createnode(root->right,value);
    }else if(value <root->data){
        root->left=createnode(root->left,value);
    }
    return root;
}

struct node* deletenode(struct node* root,int value){
    //base condition
    if(root==NULL){
        return root;
    }else if(value < root->data){
        root->left=deletenode(root->left,value);
    }else if(value > root->data){
        root->right=deletenode(root->right,value);
    }else{
        //value is found...
        //case 1: no child
        if(root->left==NULL && root->right==NULL){
            free(root);
            root = NULL;
            return root;
        }
        //case 2: one child
        else if(root->left==NULL){
            struct node* temp=root;
            root=root->right;
            free(temp);
            return root;

        }else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        //case 3: 2 childs
        else{
            struct node* temp=root->right;
            root->data=temp->data;
            root->right=deletenode(root->right,temp->data);
        }
    }

}

int main(){
    struct node *root=NULL;
    root=createnode(root, 12);
    createnode(root,23);
    createnode(root, 43);
    createnode(root, 56);
    createnode(root, 65);

    printf("Original BST\n");
    traverse_inorder(root);

    root=deletenode(root,12);
    printf("\nmodified BST delete 12\n");
    traverse_inorder(root);
    
    root=deletenode(root,43);
    printf("\nmodified BST delete 43\n");
    traverse_inorder(root);

    root=deletenode(root,65);
    printf("\nmodified BST delete 65\n");
    traverse_inorder(root);

    return 0;
}