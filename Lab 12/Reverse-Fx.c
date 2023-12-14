//NOTE : THIS WAS OPTIONAL
//THIS IS JUST AN IDEA
//IT'S NOT WORKING CORRECTLY
#include<stdio.h>
#include<math.h>

int reverse(int n,int i);

void main()
{
    int n,i;

    printf("Enter the value of N:");
    scanf("%i", &n);

    printf("Enter number of digits:");
    scanf("%i", &i);

    int result = reverse(n,i);

    printf("Reverse of number: %d\n", result);
}

int reverse(int n,int i)
{
    int lastDigit = n % 10;

    int position = (int)pow(10, i - 1);

    return (lastDigit * position + reverse(n / 10, i - 1));
}