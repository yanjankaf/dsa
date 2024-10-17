#ifndef __STACK_H
#define __STACK_H

#include "../linkedList/singlyLinkedList.h"

struct Node* pop(struct Node* stack){
    return deleteTail(stack);
}

struct Node* push(struct Node* stack, int data){
    return addNode_R(stack, data);
}


#endif