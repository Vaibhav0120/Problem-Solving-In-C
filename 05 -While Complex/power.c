//Write a C Program to find power of a given number using recursion. The number and the power to be calculated is taken from test case

#include <stdio.h>  

long power(int, int);

int main()
{
int pow, num;
long result;

scanf("%d", &num); //The number taken as input from test case data 

scanf("%d", &pow); //The power is taken from the test case 
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}

long power(int base, int exponent) 
{
    if (exponent == 0) 
    {
        return 1;
    } 
    else 
    {
        return base * power(base, exponent - 1);
    }
}