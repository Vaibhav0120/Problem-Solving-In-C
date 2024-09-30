#include <stdio.h>
#include<malloc.h>

int main() 
{
    int n, i, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory dynamically for the array
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter %dth element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array are: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    // Free dynamically allocated memory
    free(arr);

    return 0;
}
