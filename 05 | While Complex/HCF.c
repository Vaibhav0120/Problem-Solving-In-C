#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

int HCF(int num1, int num2) 
{
    while (num1 != num2)
    {
        if (num1 > num2) 
        {
            num1 -= num2;
        } 
        else 
        {
            num2 -= num1;
        }
    }
    return num1;
}