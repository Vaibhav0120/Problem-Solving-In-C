#include<stdio.h>

struct Student
{
    int Rollno;
    char name[15];
    char mail[20];
    long int mobile;
    int Total;

    int M1;
    int M2;
    int M3;
    int M4;
    int M5;
};

void main()
{
    int i;
    struct Student a[500];

    for(i=0;i<500;i++)
    {
        printf("| Rollno | Name | Mail | Mobile |");
        printf("\n");
        scanf("%d %s %s %ld %ld",&a[i].Rollno, &a[i].name, &a[i].mail, &a[i].mobile);
        printf("\n");
        printf("| M1 | M2 | M3 | M4 | M5 |");
        printf("\n");
        scanf("%d %d %d %d %d",&a[i].M1, &a[i].M2, &a[i].M3, &a[i].M4, &a[i].M5);
        printf("\n");

        a[i].Total = a[i].M1 + a[i].M2 + a[i].M3 + a[i].M4 + a[i].M5;
    }

    for(i=0;i<500;i++)
    {
        if(a[i].Total > 450)
            printf("| Rollno-%d | Name-%s | Total-%d |",a[i].Rollno,a[i].name,a[i].Total);
        printf("\n");
    }

}