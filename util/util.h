#ifndef __UTIL_H__CUSTOM
#define __UTIL_H__CUSTOM
#include <stdio.h>
#include <stdlib.h>

/**
 * Print the array range.
 * `arr` is pointer to the array.
 * `start` and `end` are 0 based.
 */
int printArray(int* arr, int start, int end){
    int i = start;
    while (i < end + 1)
    {
        printf("%-4d ", arr[i]);
        i++;
    }
    printf("\n");
}


/**
 * Swap two elements based on index
 * `arr` is pointer to the array.
 * `i` and `j` are 0 based.
 */
void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}



#endif