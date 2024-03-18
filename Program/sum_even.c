#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N);
int i;
for (i = 1; i <= N; i++)
{
if (i % 2 == 0)
sum = sum + i;
}
printf("Sum = %d", sum);
}