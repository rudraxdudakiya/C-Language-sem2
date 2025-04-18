/*
 * find_replace.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);
    FILE *fp,*fp1;

    char ch;
    char filename[255];

    printf("Enter the file name=");
    scanf("%s" ,filename);

    printf("%s" ,filename);

    fp = fopen(filename,"r");

    if(fp == NULL)
    {
        printf("\nCannot open the file\n");
        exit(0);
    }

    fp1 = fopen("temp.txt","w");

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 'A')
        {
            ch = 'a';
            fputc(ch,fp1);
        }
        else
        {
            putc(ch,fp1);
        }
    }

    fclose(fp1);
    fclose(fp);

    return 0;
}
