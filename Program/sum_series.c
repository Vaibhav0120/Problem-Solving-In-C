//1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N

#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
int i;
for(i=1;i<=N;i++)
sum = sum + ((float)1/(float)i);
printf("Sum of the series is: %.2f\n",sum);
}