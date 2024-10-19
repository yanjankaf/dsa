#include <stdio.h>
#include <stdlib.h>
#include "../util/util.h"

void selectionSort(int* arr, unsigned int length){
    for (size_t i = 0; i < length; i++)
    {
       int max = 0;
       for (size_t j = 0; j < length-i; j++)
       {
            if(arr[j] >= arr[max]){
                max = j;
            }
       }

       if(max != length - i - 1){
        swap(arr,max, length-i-1);
       }
    }
    
}


int main(int argc, char const *argv[])
{
    int nums[] = {8, 4, -90, 11, 23, 45, 25};
    
    printArray(nums, 0, 6);
    selectionSort(nums, 8);
    printArray(nums, 0, 6);

    return 0;
}
