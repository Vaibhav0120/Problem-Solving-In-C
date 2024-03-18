#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;

    // INPUT FIRST ARRAY - A

    printf("Row for 1st array: ");
    scanf("%i", &r1);

    printf("Column for 1st array: ");
    scanf("%i", &c1);

    int a[100][100];

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            printf("A[%i][%i]: ", i, j);
            scanf("%i", &a[i][j]);
        }
    }

    // INPUT SECOND ARRAY - B

    printf("Row for 2nd array: ");
    scanf("%i", &r2);

    printf("Column for 2nd array: ");
    scanf("%i", &c2);

    int b[100][100];

    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("B[%i][%i]: ", i, j);
            scanf("%i", &b[i][j]);
        }
    }

    // CHECK IF ADDITION IS POSSIBLE
    if (r1 != r2 || c1 != c2) 
    {
        printf("ERROR: Matrix A and B should be of same order for addition.\n");
        return 0;
    }

    // INITIALIZE RESULT ARRAY - C
    int c[100][100];

    // ADDING BOTH MATRICES
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // PRINTING RESULTANT ARRAY
    
    printf("Sum of A & B:");
    printf("\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {

            printf("[%i]  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
