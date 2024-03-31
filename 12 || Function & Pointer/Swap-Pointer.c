#include<stdio.h>

void swap(int *P,int *Q);

int main()
{
    int A,B;

    printf("Enter A:");
    scanf("%i",&A);

    printf("Enter B:");
    scanf("%i",&B);
    
    swap(&A,&B);

    printf("A = %i || B = %i",A,B);
}

void swap(int *P,int *Q)
{
    int temp;       //Without using 3rd variable - 5   2
    temp = *P;      // *P = *P + *Q          -->   7   2
    *P = *Q;        // *Q = *P - *Q          -->   7   5
    *Q = temp;      // *P = *P - *Q          -->   2   5
    printf("A = %i || B = %i",*P,*Q);
    printf("\n");
}
