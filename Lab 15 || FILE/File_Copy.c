#include<stdio.h>

int main()
{
    char ch;
    FILE *fs,*fd;
    fs=fopen("IPEC.txt","r");    //Open Source File in Read Mode
    
    //Check if Source File Exist
    if(fs==NULL)
    {
        printf("ERROR: File Does Not Exist.");
        return 0;
    }
    fd = fopen("Copied.txt","w");    //Open Destination File in Write Mode

    //If Exist Copy All Characters In New File
     while (1) 
    {
         ch = fgetc(fs);    //Store The Character pointed by FILE pointer on file
        if(ch==EOF)    //At The (EOF)EndOfFile Exit Loop
            break;
        fputc(ch, fd);
    }
    fclose(fs);     //Close Source File Pointer
    fclose(fd);     //Close Destination File Pointer

    //Print Destination File
    fd = fopen("Copied.txt","r");    //Open Destination File in Read Mode
     while(1)
    {
        ch = fgetc(fd);    //Store The Character pointed by FILE pointer on file
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fd);    //Close Destination File Pointer
}