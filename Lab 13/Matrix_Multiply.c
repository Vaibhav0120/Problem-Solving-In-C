#include<stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

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
    
    //INITIALISE RESULT ARRAY

    int c[100][100];
    
    //CHECK IF MULTIPLICATION IS POSSIBLE

    if(r2 == c1)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
    }
    //IF NOT POSSIBLE
    else
    {
        printf("Multiplication is not possible");
        return 0;
    }

    //PRINT RESULTANT MATRIX

    printf("Multiplication of A & B:");
    printf("\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) {

            printf("[%i]  ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}