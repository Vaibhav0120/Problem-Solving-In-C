#include <stdio.h>

int main() {
    int n, i, low, high, pivot, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter %dth Element: ",i);
        scanf("%d", &arr[i]);
    }

    low = 0;
    high = n - 1;

    while (low < high) {
        pivot = arr[high]; 
        int i = low - 1;  

        for (j = low; j <= high - 1; j++) {
            if (arr[j] <= pivot) {
                i++; 
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        if (i + 1 - low < high - (i + 1)) {
            high = i;
        } else {
            low = i + 2;
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
