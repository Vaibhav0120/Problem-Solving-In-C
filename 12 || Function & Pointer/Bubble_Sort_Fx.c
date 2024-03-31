#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); // Enter number of elements to sort is taken from test case data
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // The elements of the array is taken from the test data
    }

    sort(a, n); // Calling the sorting function

    //Printing the sorted array 
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}

void sort(int *a, int n)
{
    int i,j,t;

    for( i=0 ; i<n ; i++ )
    {   
        for( j=i+1 ; j<n ; j++)
        {
            if( *(a+j) < *(a+i) )
            {
                t = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = t;
            }
        }
    }
}