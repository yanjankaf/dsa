#include <stdlib.h>
#include "../util/util.h"

void bubbleSort(int* arr, unsigned int length){
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int nums[] = {12, 5, 44, 7, 9, 16, 18, 3, 9, 15};
    printArray(nums,0, 9);
    bubbleSort(nums, 10);
    printArray(nums,0, 9);
    return 0;
}
