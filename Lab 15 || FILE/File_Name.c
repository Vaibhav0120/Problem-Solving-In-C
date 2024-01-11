#include<stdio.h>

int main()
{
    char ch;
    FILE *fp;
    fp = fopen("fullName.txt","r");

    if(fp==NULL)
    {
        printf("ERROR: File Not Found.");
        return 0;
    }


    ch = fgetc(fp);
    printf("%c.",ch);
    while(1)
    {
        ch = fgetc(fp);  
        if(ch==' ')
            break;
    }

    ch = fgetc(fp);
    printf("%c.",ch);
    while(1)
    {
        ch = fgetc(fp);  
        if(ch==' ')
            break;
    }

    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);  
    return 0;
}