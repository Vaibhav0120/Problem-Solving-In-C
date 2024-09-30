#include<stdio.h>
#include<ctype.h>
void main()
{
    char s1[100];
    char s2[100];
    int i,j,l;
    char t;

    printf("Enter String: ");
    gets(s1);

    while (s1[i] != '\0')
    {
        if(isalpha(s1[i]))
        {
            s2[j]=toupper(s1[i]);
            j++;
        }
        i++;
    }
    s2[j]='\0';
    
    //strcpy
    
    i = 0, j = 0;
    while(s2[i] != '\0')
    {
        s1[j] = s2[i];
        i++;
        j++;
    }
    s1[j] = '\0';

    //strrev

    l = i;
    i = 0, j = 0;
    while(j < l/2)
    {
        t = s2[j];
        s2[j] = s2[l - j - 1];
        s2[l - j - 1] = t;
        j++;
    }

    //strcomp

    i = 0, j = 0;
     while(s1[i] != '\0' || s2[j] != '\0')
    {
        if(s1[i] != s2[j])
            break;
        i++;
        j++;
    }
    l = s1[i] - s2[j];
    if(l == 0)
        printf("String is Palindrone");
    else
        printf("Strings is NOT Palndrone");
}