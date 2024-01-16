// Calculate Area Of Circle Using Argumented Macro
// Also Example of Nested Macro (Use of Macro in a macro)
// %f.2 show two digit after decimal point (for float)

#include<stdio.h>
#define Pi 22/7
#define ArCircle(r) {float a; a = Pi * r * r; printf("%.2f",a);}

void main()
{
    int p,r,t;

    printf("Enter Radius: ");
    scanf("%d",&r);
    
    ArCircle(r);
}