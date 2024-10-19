#ifndef __SINGLY_LINKED_LIST
#define __SINGLY_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* createNode(int num){
    struct Node* tmp = (struct Node*)(malloc(sizeof(struct Node)));
    tmp->data = num;
    tmp->next = NULL;
    return tmp;
}


void traverse_I(struct Node* head){
    while(head != NULL){
        printf("%-4d", head->data);
        head  = head->next;
    }
}

void traverse_R(struct Node* head){
    if(head!=NULL){
        printf("%-4d", head->data);
        traverse_R(head->next);
    }
}

struct Node* addNode_R(struct Node* head, int data){
    
    /**
     * @param head Head of the linked list
     * @param data the data to be added to new node
     * @return The new head of the linked list
     * Recursive approch to add node to a singly linked list
     */

    if(head == NULL){
        return createNode(data);
    }else{
        head->next = addNode_R(head->next, data);
    }
    return head;
}

struct Node* deleteTail(struct Node* root){
    /**
     * Recursively check for NULL, that is either the 
     * head being NULL or the last tail
     * and free them up, and set the previous node to NULL
     * as well.
     * 
     */

    if(root == NULL || root->next == NULL){
        free(root);
        return NULL;
    }else{
        root->next = deleteTail(root->next);
    }
    return root;
}



struct Node* deleteNode_R(struct Node* head, int i){
    if(head == NULL){
        return NULL;
    }
    if(head->data != i){
        head->next = deleteNode_R(head->next, i);
    }else{
        struct Node* tmp = head->next;
        free(head);
        return tmp;
    }
    return head;
}



#endif