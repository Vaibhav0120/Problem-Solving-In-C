#include<stdio.h>

struct Distance{
    int feet;
    int inch;
}d1,d2,sum;

int main()
    {
    //Enter 1st distance
    printf("Enter Feet 1: ");
    scanf("%d",&d1.feet); 
    printf("Enter Inch 1: ");
    scanf("%d",&d1.inch);
    //Enter 2nd distance
    printf("Enter Feet 2: ");
    scanf("%d",&d2.feet);
    printf("Enter Inch 2: ");
    scanf("%d",&d2.inch);
    // Sum the feet
    sum.feet = d1.feet + d2.feet;
    
    // Sum the inches
    sum.inch = d1.inch + d2.inch;

    // If sum of inches is greater than or equal to 12, adjust feet and inches
    if (sum.inch >= 12) {
        sum.feet += sum.inch / 12;
        sum.inch %= 12;
    }
    printf("Sum of distances = %d feet %d inches",sum.feet,sum.inch);
    return 0;
}