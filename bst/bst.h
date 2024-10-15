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




#endif