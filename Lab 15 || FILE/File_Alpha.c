#include<stdio.h>

int main()
{
    char c;
    int n=0;
    FILE *fp;
    fp = fopen("IPEC.txt","r");    //Open File in Read Mode

    //Check if File Exist
    if(fp==NULL)
    {
        printf("ERROR: File Not Found.");
        return 0;
    }

    //If Exist Do The Following
    while(1)
    {
        c = fgetc(fp);    //Store The Character pointed by FILE pointer on file
        if(c==EOF)    //At The (EOF)EndOfFile Exit Loop
            break;
        if(c>=65 && c<=90 || c>=97 && c<=122)    //Check if character is alphabet by using ASCII CODES
        //Capital Alphabests ASCII: 65-90 | Small Alphabests ASCII: 97-122
        {
            n++;
        }
    }
    fclose(fp);   //Close Source File Pointer
    printf("Total number of alphabets in file: %i \n",n);
    return 0;
}