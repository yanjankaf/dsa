#include <stdio.h>
#include "bst.h"

int main(){
    struct Node* root = NULL;
    root = createBST(NULL, 56);
    root = createBST(root, 18);
    root = createBST(root, 20);
    root = createBST(root, 19);
    root = createBST(root, 70);
    root = createBST(root, 64);
    root = createBST(root, 81);
    root = createBST(root, 91);
    root = createBST(root, 62);
    root = createBST(root, 65);

    inOrder(root);
    // 18, 19, 20, 56, 62, 64, 65 70, 81, 91
    printf("\n");

    root = deleteNode(root, 64);
    inOrder(root);
    printf("\n");
    root = deleteNode_Pred(root, 70);
    inOrder(root);
    printf("\n");


    
    
}