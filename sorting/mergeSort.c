#include <stdio.h>
#include <stdlib.h>

void printArray(int* nums, int len){
    int i = 0;
    while (i < len)
    {
        printf("%-4d", nums[i]);
        i++;
    }
    printf("\n");
    
}

void merge(int* arr, int start, int mid, int end){
    int arr1Size = mid - start + 1;
    int arr2Size = end - mid;

    int* l1 = (int*)(malloc(sizeof(int) * arr1Size));
    int* l2 = (int*)(malloc(sizeof(int) * arr2Size));

    for (int i = 0; i < arr1Size; i++)
    {
        l1[i] = arr[start + i];
    }

    for (int i = 0; i < arr2Size; i++)
    {
        l2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < arr1Size && j < arr2Size)
    {
        if(l1[i] <= l2[j]){
            arr[k] = l1[i];
            i++;
        }else{
            arr[k] = l2[j];
            j++;
        }
        k++;
    }

    while (i < arr1Size)
    {
        arr[k] = l1[i];
        k++;
        i++;
    }
    
    while (j < arr2Size)
    {
        arr[k] = l2[j];
        k++;
        j++;
    }

    free(l1);
    free(l2);
    // adding another here
}

void mergeSort(int* arr, int start, int end){
    // start is first index
    // end is last index

    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
    
}


int main(int argc, char const *argv[])
{
    int nums[] = {12, 5, 44, 7, 9, 16, 18, 3, 9, 15};
    printArray(nums, 10);
    mergeSort(nums, 0, 9);
    printArray(nums, 10);
    return 0;
}
