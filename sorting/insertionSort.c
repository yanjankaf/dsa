#include <stdio.h>
#include "../util/util.h"

void insertionSort(int* arr, unsigned int length){
    for (size_t i = 2; i < length; i++)
    {
        int current = arr[i];
        int j = i -1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    
}

int main(int argc, char const *argv[])
{
    int nums[] = {2, 8, 9, 11, 6, 5, 4, 18};
    printArray(nums, 0, 7);
    insertionSort(nums, 8);
    printArray(nums, 0, 7);

    return 0;
}
