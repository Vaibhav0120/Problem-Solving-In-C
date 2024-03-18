#include<stdio.h>

struct  employee
{
    int empid;
    char name[15];
    char department[20];
    long int mobile;
    int salary;
};

void main()
{
    int i;
    struct employee a[500];

    for(i=0;i<500;i++)
    {
        printf("| Empid | Name | Department | Mobile | Salary |");
        printf("\n");
        scanf("%d %s %s %ld %ld",&a[i].empid, &a[i].name, &a[i].department, &a[i].mobile, &a[i].salary);
        printf("\n");
    }

    for(i=0;i<500;i++)
    {
        if(a[i].salary > 75000)
            printf("| Empid-%d | Name-%s |",a[i].empid,a[i].name);
        printf("\n");
    }

}