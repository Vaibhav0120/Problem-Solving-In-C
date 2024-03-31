#include<stdio.h>

int main()
{
    int r, c, i, j, k;

    // INPUT FIRST ARRAY - A

    printf("Row for 1st array: ");
    scanf("%i", &r);

    printf("Column for 1st array: ");
    scanf("%i", &c);

    int a[100][100];

    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("A[%i][%i]: ", i, j);
            scanf("%i", &a[i][j]);
        }
    }

    //INITIALISE RESULT ARRAY

    int result[100][100];
    
    //Transpose "a" and store in "result"

   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            result[j][i]= a[i][j];
        }
    }

    //PRINT RESULTANT MATRIX

    printf("Transpose Of Matrix:");
    printf("\n");
    for (i = 0; i < c; i++) 
    {
        for (j = 0; j < r; j++) {

            printf("[%i]  ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}