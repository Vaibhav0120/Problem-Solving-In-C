#include<stdio.h>

int main()
{
    char ch;
    FILE *fp;
    fp = fopen("IPEC.txt","r");    //Open File in Read Mode

    //Check if File Exist
    if(fp==NULL)
    {
        printf("ERROR: File Not Found.");
        return 0;
    }

    //Print Destination File
    while(1)
    {
        ch = fgetc(fp);    //Store The Character pointed by FILE pointer on file
        if(ch==EOF)
            break;
        printf("%c",ch);
    }

    fclose(fp);    //Close File Pointer
    return 0;
}