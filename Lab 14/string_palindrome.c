#include<stdio.h>
void main()
{
    char s1[100];
    char s2[100];
    int i,j,l;
    char t;
    printf("Enter 1st String: ");
    gets(s1);

    //strcpy

    while(s1[i]!='\0')
    {
        s2[j]=s1[i];
        i++;
        j++;
    }
    s2[i]='\0';

    //strrev

    l=i;
    i=0,j=0;
    while(i<l/2)
    {
        t=s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=t;
        i++;
    }

    //strcomp

    i=0,j=0;
     while(s2[i]!='\0' || s2[j]!='\0')
    {
        if(s1[i]!=s2[j])
            break;
        i++;
        j++;
    }
    l = s1[i]-s2[j];
    if(l==0)
        printf("String is Palindrone");
    else
        printf("Strings is NOT Palndrone");
}