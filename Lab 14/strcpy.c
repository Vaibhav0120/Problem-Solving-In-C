#include<stdio.h>
void main()
{
    char s1[100];
    char s2[100];
    int i,j;
    printf("Enter 1st String: ");
    gets(s1);
    printf("Enter 2nd String: ");
    gets(s2);

    while(s1[i]!='\0')
    {
        s2[j]=s1[i];
        i++;
        j++;
    }
    s2[i]='\0';
    puts(s1);
    puts(s2);
}