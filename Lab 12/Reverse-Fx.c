//NOTE: TRY TO RUN IT ON ONLINE C COMPILER IF NOT WORKING CORRECTLY ON VS CODE
#include<stdio.h>

int reverse(int n, int reversedNum);

int main()
{
int n,reversedNum;
printf("Enter the value of N:");
scanf("%i", &n);
reversedNum = reverse(n, reversedNum);
printf("Reverse of number: %i", reversedNum);
return 0;
}

int reverse(int n, int reversedNum){
if (n == 0)
return reversedNum;
else{
int lastDigit;
lastDigit = n % 10;
reversedNum = reversedNum * 10 + lastDigit;
return reverse(n / 10, reversedNum);}
}