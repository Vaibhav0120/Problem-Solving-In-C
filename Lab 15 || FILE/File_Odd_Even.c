#include<stdio.h>

int main()
{
    int i=0;
    FILE *file,*odd,*even;
    file = fopen("Number.txt","r");
    odd = fopen("odd.txt","w");
    even = fopen("even.txt","w");

    if(file == NULL)
    {
        printf("ERROR: File not found.");
        return 0;
    }

    while(1)
   {      
            //fscanf(Number, "%d", &i)
        i = getw(file);
        if(i == EOF)
            break;
        if(i % 2 == 0)
            //fprintf(even, "%d", i);
            putw(i,even);
        else
            //fprintf(odd, "%d", i);
            putw(i,odd);
    }
    fclose(file);
    fclose(even);
    fclose(odd);

    even = fopen("even.txt","r");
    while(1)
    {
        //fscanf(even, "%d", &i)
        i = getw(even);
        if(i == EOF)
            break;
        printf("%d",i);
    }
    fclose(even);
}