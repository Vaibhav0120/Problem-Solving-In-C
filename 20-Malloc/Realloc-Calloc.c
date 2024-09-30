#include <stdio.h>
#include <malloc.h>

int main() {
    int *arr;
    int size, newSize, i;

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array using calloc:  ALL INITIALISED VALUE ARE '0'
    arr = (int *)calloc(size, sizeof(int));

    for (i = 0; i < size; i++) 
    {
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array are: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask user for new size
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    // Reallocate memory for the array using realloc
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // Initialize the additional elements to zero
        for (i = size; i < newSize; i++) 
        {
            arr[i] = 0;
        }

    for (i = size; i < newSize; i++) 
    {
        printf("Enter additional %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array after reallocation are: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
