#include <stdio.h>
#include <stdlib.h>
#include "singlyLinkedList.h"



int main(int argc, char const *argv[])
{
    struct Node* head = NULL;
    head = addNode_R(head, 34);
    head = addNode_R(head, 56);
    head = addNode_R(head, 27);
    head = addNode_R(head, 83);
    traverse_I(head);
    printf("\n");
    head = deleteNode_R(head, 27);
    traverse_I(head);

    return 0;
}
