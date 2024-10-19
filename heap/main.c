#include <stdio.h>
#include "./heap.h"

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    printArray(arr, 0, 5);
    heapify(arr, 6);
    printArray(arr, 0, 5);



    
    return 0;
}
