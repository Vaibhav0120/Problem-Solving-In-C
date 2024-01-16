#include<stdio.h>

int reverse(int n, int reversed);

int main()
{
int n,reversed=0;

printf("Enter the value of N:");
scanf("%i", &n);

reversed = reverse(n, reversed);

printf("Reverse of number: %i", reversed);

return 0;
}

int reverse(int n, int reversed)
{
    int last;
    if (n == 0)
    return reversed;
    else
    {
        last = n % 10;
        reversed = reversed * 10 + last;
        return reverse(n / 10, reversed);
    }
}