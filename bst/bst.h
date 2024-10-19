#ifndef __BST_H
#define __BST_H

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *t1 = (struct Node *)(malloc(sizeof(struct Node)));
    t1->data = data;
    t1->left = t1->right = NULL;
    return t1;
}

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d, ", root->data);
        inOrder(root->right);
    }
}

struct Node *createBST(struct Node *root, int value)
{
    if (root == NULL)
    {
        root = createNode(value);
    }
    else if (root->data < value)
    {
        root->right = createBST(root->right, value);
    }
    else if (root->data > value)
    {
        root->left = createBST(root->left, value);
    }
    return root;
}

struct Node *search(struct Node *root, int key)
{
    if (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data < key)
        {
            search(root->right, key);
        }
        else if (root->data > key)
        {
            search(root->left, key);
        }
    }else{
        return NULL;
    }
}


struct Node* getInOrderSuccessor(struct Node* root)
{
    root = root->right;
    while (root!= NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
};


struct Node* getInOrderPredessor(struct Node* root){
    root = root->left;
    while (root != NULL && root->right != NULL)
    {
        root = root->right;
    }

    return root;
}

struct Node* deleteNode(struct Node* root, int val){
    if(root == NULL){
        return NULL;
    }
    if(root->data < val){
        root->right = deleteNode(root->right, val);
    }else if(root->data > val){
        root->left = deleteNode(root->left, val);
    }else{
        if(root->left != NULL && root->right == NULL){
            struct Node* l = root->left;
            free(root);
            return l;
        }else if(root->left == NULL && root->right != NULL){
            struct Node* r = root->right;
            free(root);
            return r;
        }else if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }else{
            struct Node* succesor = getInOrderSuccessor(root);
            root->data = succesor->data;
            root->right = deleteNode(root->right, succesor->data);
        }
    }
    return root;
}




struct Node* deleteNode_Pred(struct Node* root, int val){
    if(root == NULL){
        return NULL;
    }
    if(root->data < val){
        root->right = deleteNode(root->right, val);
    }else if(root->data > val){
        root->left = deleteNode(root->left, val);
    }else{
        if(root->left != NULL && root->right == NULL){
            struct Node* l = root->left;
            free(root);
            return l;
        }else if(root->left == NULL && root->right != NULL){
            struct Node* r = root->right;
            free(root);
            return r;
        }else if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }else{
            struct Node* pred = getInOrderPredessor(root);
            root->data = pred->data;
            root->left = deleteNode(root->left, pred->data);
        }
    }
    return root;
}

#endif