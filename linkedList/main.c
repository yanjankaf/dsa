#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traverse(struct Node* head){
    while(head != NULL){
        printf("%-4d", head->data);
        head  = head->next;
    }
}

struct Node* createNode(int num){
    struct Node* tmp = (struct Node*)(malloc(sizeof(struct Node)));
    tmp->data = num;
    tmp->next = NULL;
    return tmp;
}

struct Node* addNode(struct Node* head, int data){
    if(head == NULL){
        return createNode(data);
    }else{
        head->next = addNode(head->next, data);
    }
    return head;
}

int main(int argc, char const *argv[])
{
    struct Node* head = NULL;
    head = addNode(head, 34);
    head = addNode(head, 56);
    head = addNode(head, 27);
    head = addNode(head, 83);

    traverse(head);

    return 0;
}
