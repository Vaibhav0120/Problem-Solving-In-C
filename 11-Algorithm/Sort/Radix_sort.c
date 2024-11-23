#include <stdio.h>

int findMaximum(int array[], int size) {
    int maximum = array[0];
    for (int i = 1; i < size; i++)
        if (array[i] > maximum)
            maximum = array[i];
    return maximum;
}

void countingSort(int array[], int size, int digitPlace) {
    int sortedArray[size];
    int frequency[10] = {0};

    for (int i = 0; i < size; i++)
        frequency[(array[i] / digitPlace) % 10]++;

    for (int i = 1; i < 10; i++)
        frequency[i] += frequency[i - 1];

    for (int i = size - 1; i >= 0; i--) {
        int digit = (array[i] / digitPlace) % 10;
        sortedArray[frequency[digit] - 1] = array[i];
        frequency[digit]--;
    }

    for (int i = 0; i < size; i++)
        array[i] = sortedArray[i];
}

void radixSort(int array[], int size) {
    int maxValue = findMaximum(array, size);
    for (int place = 1; maxValue / place > 0; place *= 10)
        countingSort(array, size, place);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int numbers[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    radixSort(numbers, length);
    printArray(numbers, length);
    return 0;
}
