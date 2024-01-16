#include<stdio.h>

int main()
{
    char c;
    int vowels=0,consonant=0;
    FILE *fp;
    fp = fopen("IPEC.txt","r");     //Open File in Read Mode

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
            //If Character is Alphabet then Check if it is Vowel
            if(c =='a' || c =='A' || c =='e' || c =='E' || c =='i' || c =='I' || c =='o' || c =='O' || c =='u' || c =='U')
            {
                vowels++;
            }
            //Else If It is Alphabet And Not a Vowel Then It is a Consonant
            else
            {
                consonant++;   
            }
        }
    }
    fclose(fp);     //Close File Pointer
    printf("Vowel: %i \n",vowels);
    printf("Consonant: %i \n",consonant);
    return 0;
}