#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int size) 
{
    // Assuming the first element as maximum
    int max = arr[0];

    // Loop through the array to find the maximum element
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements into the array:\n", size);
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
