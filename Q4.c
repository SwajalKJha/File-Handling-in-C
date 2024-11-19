#include <stdio.h>

int main()
{
    FILE *fp=fopen("myFirst.txt", "r+"); 

    if(fp == NULL)
    {
        printf("Unable to open file for writing\n");
        return -1;
    }
    printf("file pointer position = %ld\n", ftell(fp));
    char ch1 = 'A';
    //write a char to the file
    fputc(ch1,fp);

    printf("file pointer position = %ld\n", ftell(fp));
    rewind(fp); // making pointer point to the start of the file
    
    printf("file pointer position = %ld\n", ftell(fp));
    char ch; 
    while((ch=fgetc(fp)) != EOF)
    {
        printf("the char is = %c",ch);
        printf("\n");
    }

    fclose(fp);  // Close the file
    return 0;
}
