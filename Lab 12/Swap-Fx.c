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

    printf("A = %i || B = %i   <-- IN MAIN",A,B);
}

void swap(int P,int Q)
{
    int temp;
    temp = P;
    P = Q;
    Q = temp;

    printf("A = %i || B = %i   <-- IN SWAP",P,Q);
    printf("\n");
}