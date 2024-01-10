#include<stdio.h>

void swap(int P,int Q);

int main()
{
    int A,B;

    printf("Enter A:");
    scanf("%i",&A);

    printf("Enter B:");
    scanf("%i",&B);
    
    swap(A,B);

    printf("A = %i || B = %i",A,B);
}

void swap(int P,int Q)
{
    int temp;
    temp = P;
    P = Q;
    Q = temp;

    printf("A = %i || B = %i",P,Q);
    printf("\n");
}