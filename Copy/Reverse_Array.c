#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }

int j=n-1,t=0;
for(c=0;c<n/2;c++)
{
  t=array[c];
  array[c]=array[j];
  array[j]=t;
  j--;
}
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}