/*
 * putc_getc.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;

    fp=fopen("Characters.txt","w");

    while ((ch=getchar()) != '\n')
    {
         putc(ch,fp);
    }

    fclose(fp);

    fp=fopen("Characters.txt","r");

    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
