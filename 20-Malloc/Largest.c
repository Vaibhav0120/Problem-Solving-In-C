#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    printf("number of elt: ");
    scanf("%d", &n); //Total number of elements

    element = (float *)malloc(n * sizeof(float)); // Changed from int to float

    printf("1th: ");
    scanf("%f", &element[0]); // Read the first element

    float m = element[0]; // Initialize the maximum value to the first element
    for (int i = 1; i < n; i++) 
    {
        printf("%ith: ",i+1);
        scanf("%f", &element[i]); // Read the remaining elements

        // Update the maximum value if the current element is larger
        if (element[i] > m)
            m = element[i];
    }

    printf("Largest element = %.2f\n", m); // Print the largest element

    // Free dynamically allocated memory
    free(element);

    return 0;
}