#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char ch;
    int size = 0;

    fp = fopen("pp.txt", "r");
    if (fp == NULL)
    {
        printf("\nFile unable to open...");
    }
    else
    {
        printf("\nFile opened...");
    }
    fseek(fp, 0, 2);   
    size = ftell(fp);  
    printf("The size of given file is: %d\n", size);
    fclose(fp);
}
