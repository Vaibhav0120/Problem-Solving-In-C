#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */

    scanf("%d", &n); // Number of elements in the array is read from the test case data

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data

    scanf("%d", &search);
    int temp = linear_search(array,n,search);
}

    int linear_search(int a[],int n,int elt)
    {
    int i,f,loc;
    for(i = 0; i < n; i++)
    {
        if( a[i] == elt )
        {
            f = 1;
            loc = i;
            break;
        }
    }

    if( f == 1 )
        printf("%d is present at location %d.", elt, loc+1);
    else
        printf("%d is not present in the array.", elt);
      
    return 0;  
    }