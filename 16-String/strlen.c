#include<stdio.h>
void main()
{
    int i;
    char s[100];

    printf("Enter String: ");
    gets(s);
    
    while(s[i]!='\0')
    {
        i++;
    }
    
    printf("String Length: %d",i);
}