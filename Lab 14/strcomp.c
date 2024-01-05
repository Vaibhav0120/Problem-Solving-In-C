#include<stdio.h>
void main()
{
    char s1[100];
    char s2[100];
    int i,j,l;

    printf("Enter 1st String: ");
    gets(s1);
    printf("Enter 2nd String: ");
    gets(s2);

    while(s1[i]!='\0' || s2[j]!='\0')
    {
        if(s1[i]!=s2[j])
            break;
        i++;
        j++;
    }
    l = s1[i]-s2[j];
    
    if(l==0)
        printf("Strings are same");
    else
        printf("Strings are not same");
}