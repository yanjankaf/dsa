#ifndef __HEAP_H
#define __HEAF_H

#include "../util/util.h"
#include "../bst/bst.h"

unsigned int leftChildIndex(int i)
{
    return 2 * i + 1;
}

unsigned int rightChildIndex(int i)
{
    return 2 * i + 2;
}

unsigned int parentIndex(int i)
{
    if (i % 2 == 0)
    {
        return (i / 2) - 1;
    }
    else
    {
        return i / 2;
    }
}

void swapAndUpdate(int *arr, int *i, int swap1, int swap2)
{
    swap(arr, swap1, swap2);
    *i = swap2;
}

void heapify(int *arr, int len)
{
    int i = len / 2 -1;
    while (i >= 0)
    {
        int leftIndex = leftChildIndex(i);
        int rightIndex = rightChildIndex(i);

        if (leftIndex < len && rightIndex < len)
        {
            int left = arr[leftIndex];
            int right = arr[rightIndex];
            int itself = arr[i];

            // compare which is larger
            if (left > right && left > itself)
            {
                swapAndUpdate(arr, &i, i, leftIndex);
                continue;
            }
            else if (right > left && right > itself)
            {
                swapAndUpdate(arr, &i, i, rightIndex);
                continue;
            }
            
        }
        else if (rightIndex >= len && leftIndex < len && arr[leftIndex] > arr[i])
        {
            swapAndUpdate(arr, &i, i, leftIndex);
            continue;
        }

        i--;
    }
}

void insertIntoHeap(int* arr, int elem);

#endif