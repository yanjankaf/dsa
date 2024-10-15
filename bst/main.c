#include <stdio.h>
#include "bst.h"

int main(){
    struct Node* root = createBST(NULL, 45);
    createBST(root, 56);
    createBST(root, 43);
    createBST(root, 71);
    createBST(root, 82);
    createBST(root, 92);
    
    inOrder(root);
}