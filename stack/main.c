#include <stdio.h>
#include "stack.h"

int main(int argc, char const *argv[])
{
    struct Node* st = NULL;

    st = push(st, 23);
    st = push(st, 56);
    st = push(st, 82);
    st = pop(st);
    st = push(st, 80);

    traverse_I(st);

    return 0;
}
