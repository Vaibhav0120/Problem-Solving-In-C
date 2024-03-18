#include<stdio.h>
void main()
{
    char s1[100];
    int i,l;
    char t;

    printf("Enter 1st String: ");
    gets(s1);

    while(s1[i]!='\0')
        i++;

    l=i,i=0;

    while(i<l/2)
    {
        t=s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=t;
        i++;
    }

    printf("Reverse: ");
    puts(s1);
}