#include <stdio.h>

int main() {
    int n, i, low, high, pivot, j, temp;

    // Asking user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initializing the low and high indices for the Quick Sort
    low = 0;
    high = n - 1;

    // Main sorting loop, without recursion
    while (low < high) {
        pivot = arr[high];  // Choosing the pivot as the last element
        int i = low - 1;    // Pointer for smaller elements

        // Partitioning step
        printf("\nPartitioning with pivot element: %d\n", pivot);
        for (j = low; j <= high - 1; j++) {
            if (arr[j] <= pivot) {
                i++;  // Move the boundary of smaller elements

                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // Visualizing the array after each swap
                printf("Swapping %d and %d: ", arr[i], arr[j]);
                for (int k = 0; k < n; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }

        // Swap the pivot element with arr[i+1] to put it in the correct position
        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        // Show the array after placing the pivot in its correct place
        printf("Placing pivot %d at position %d: ", pivot, i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        // Now arr[i+1] is the correct position for the pivot

        // Split the array into two parts: one with elements < pivot, one with elements > pivot
        if (i + 1 - low < high - (i + 1)) {
            // Sort the smaller partition first (left side)
            high = i;
        } else {
            // Sort the right partition
            low = i + 2;
        }
    }

    // Displaying the sorted array
    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
