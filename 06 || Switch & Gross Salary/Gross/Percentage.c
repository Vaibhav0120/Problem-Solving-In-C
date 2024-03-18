#include<stdio.h>

int main()
{
    int s[5],total=0,per;

    for(int i=0;i<5;i++)
    {
        printf("Enter Marks of Sunject %d:",i);
        scanf("%d",&s[i]);
        total = total + s[i];
    }

    per= (total/500)*100;

    if(per>=90)
        printf("Grade A");
    else if(per>=85)
        printf("Grade B");
    else if(per>=75)
        printf("Grade C");
    else if(per>=60)
        printf("Grade D");
    else
        printf("FAIL");    
}