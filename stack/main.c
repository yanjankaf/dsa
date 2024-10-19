#include <stdio.h>
// #include "stack.h"
#include "../util/util.h"
#define stackSize 10
void push(int* stack, int* top, int item){
    if(*top < stackSize - 1){
        (*top) = (*top) + 1;
        stack[*top] = item;
    }else{
        printf("Stack overflow\n");
    }
}

void pop(int* stack, int* top){
    if(*top > -1){
        (*top)--;
        stack[(*top) + 1] = 0;
    }else{
        printf("Stack underflow\n");
    }
}


int main(int argc, char const *argv[])
{
    int stackA[stackSize] = {};
    int top = -1;

    push(stackA, &top, 10);
    printArray(stackA, 0, 9);

    push(stackA, &top, 20);
    printArray(stackA, 0, 9);

    pop(stackA, &top);
    printArray(stackA, 0, 9);
    push(stackA, &top, 40);
    push(stackA, &top, 90);
    printArray(stackA, 0, 9);

    pop(stackA, &top);
    printArray(stackA, 0, 9);

    pop(stackA, &top);
    printArray(stackA, 0, 9);




    


    printf("%d\n", top);
    printArray(stackA, 0, 9);



    return 0;
}
