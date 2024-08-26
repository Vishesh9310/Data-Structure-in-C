//first approach for deleting data in BST

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

struct node *createnode(struct node *root, int value){
    if(root==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(value < root->data){
        root->left=createnode(root->left, value);
    }else if(value > root->data){
        root->right=createnode(root->right, value);
    }

    return root;
}
/*given a binary search tree and a key, this function deletes the key and returns the new root*/
struct node* deletenode(struct node* root, int value){

    //case 1:
    if(root==NULL){
        return root;
    }
    if(root->data > value){
        root->left=deletenode(root->left,value);
        return root;
    }else if(root->data < value){
        root->right=deletenode(root->right,value);
        return root;
    }

    //case 2:
    //we reach here when root is the node, to be deleted, if one of the children is empty
    if(root->left == NULL){
        struct node* temp=root->right;
        free(root);
        return temp;
    }else if(root->right == NULL){
        struct node* temp=root->left;
        free(root);
        return temp;
    }

    //case 3:
    //if both children exist
    else{
        struct node* succParent=root;
        //find successor
        struct node* succ=root->right;
        while(succ->left!=NULL){
            succParent=succ;
            succ=succ->left;
        }
        /*
        delete successor. since successor is always left child of ites parent. we can safely make successor's right,
        right child as left of ites parent if there is no succ, then assign succ->right to succParent->right
        */
        if(succParent!=root){
            succParent->left=succ->right;
        }else{
            succParent->right=succ->right;
        }
        //copy successor data to root
        root->data=succ->data;
        free(succ);
        return root;
    }

}

int main(){
    struct node* root=NULL;
    root=createnode(root, 12);
    createnode(root,23);
    createnode(root, 43);
    createnode(root, 56);
    createnode(root, 65);

    printf("Original BST\n");
    traverse_inorder(root);

    root=deletenode(root,12);
    printf("\nmodified BST\n");
    traverse_inorder(root);
    
    root=deletenode(root,43);
    printf("\nmodified BST\n");
    traverse_inorder(root);

    root=deletenode(root,65);
    printf("\nmodified BST\n");
    traverse_inorder(root);

    return 0;
}