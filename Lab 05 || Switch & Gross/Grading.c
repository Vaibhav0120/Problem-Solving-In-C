#include <stdio.h>

int main() {
    float p;

    printf("Enter p: ");
    scanf("%f", &p);

    int grade;

    if (p >= 90) 
    {grade = 'A';} 
    else if (p >= 85) 
    {grade = 'B';} 
    else if (p >= 75) 
    {grade = 'C';} 
    else if (p >= 69) 
    {grade = 'D';} 
    else 
    {grade = 'F';}

    switch (grade) 
    {
        case 'A':
            printf("Grade: A\n");
            break;
        case 'B':
            printf("Grade: B\n");
            break;
        case 'C':
            printf("Grade: C\n");
            break;
        case 'D':
            printf("Grade: D\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid p\n");
    }

    return 0;
}