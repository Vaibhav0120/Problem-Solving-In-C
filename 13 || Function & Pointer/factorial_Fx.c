#include <stdio.h>

void findFact(int, long int*);

int main()
{
    long int fact; //factorial of the number
    int num1; 
	scanf("%d",&num1); //The number is taken from test data

    findFact(num1, &fact);
    printf("The Factorial of %d is : %ld\n",num1, fact);
    return 0;
}

void findFact(int num, long int *result) 
{
    *result = 1;
    while (num > 0) {
        *result *= num;
        num--;
    }
}