#ifndef __UTIL_H__CUSTOM
#define __UTIL_H__CUSTOM
#include <stdio.h>
#include <stdlib.h>

int printArray(int* arr, int start, int end){
    int i = start;
    while (i < end + 1)
    {
        printf("%-4d ", arr[i]);
        i++;
    }
    printf("\n");
}


void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}



#endif