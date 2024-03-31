#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = n; i > 0; i--) 
    {
        result = result * i;
    }
    return result;
}

int main() 
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        int result = factorial(num);
        printf("Factorial of %d is %d.\n", num, result);
    }

    return 0;
}
