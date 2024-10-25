#include <stdio.h>
#include <stdlib.h>

void readArray(int* arr, unsigned int size){
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", arr+i);
    }
}

void printArray(int* arr, unsigned int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

unsigned int binarySearch(int* arr, unsigned int start, unsigned int end, int element){
    /**
     * Make search in a sorted array
     */
    if(start < end){
        unsigned int mid =  (start + end) / 2;

        if(arr[mid] == element){
            return mid;
        }else if(arr[mid] > element){
            return binarySearch(arr, start, mid, element);
        }else if(arr[mid] < element){
            return binarySearch(arr, mid+1, end, element);
        }
    }else{
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    unsigned int s = 0;
    printf("Enter the size of array you want to read :");
    scanf("%d", &s);

    int* arr = (int*)(malloc(sizeof(int) * s));
    readArray(arr, s);

    printArray(arr, s);

    printf("Enter no to search :\n");
    int searchFor;
    scanf("%d", &searchFor);


    printf("%d\n", binarySearch(arr, 0, s-1, searchFor));

    return 0;
}
