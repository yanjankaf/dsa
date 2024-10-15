#include <stdio.h>
#include "bst.h"

int main(){
    struct Node* root = createBST(NULL, 45);
    createBST(root, 56);
    createBST(root, 43);
    createBST(root, 71);
    createBST(root, 82);
    createBST(root, 92);
    createBST(root, 63);
    createBST(root, 44);
    createBST(root, 36);

    struct Node* el = search(root, 56);
    
    if(el == NULL){
        printf("89 not found");
    }else{
        printf("%x", el);
    }
}