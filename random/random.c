/*
 * random.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	FILE *fp;
	char ch;
	int cp=0;

	fp = fopen("C:/Users/Rudrax/OneDrive/Desktop/temp.txt","r");

		cp=ftell(fp);
		printf("\nCurrent position of file %d ",cp);

		ch=fgetc(fp);
		printf("\nCharacter= %c",ch);

		fseek(fp,5,0);
		ch=fgetc(fp);
		printf("\nCharacter= %c",ch);

		fseek(fp,5,0);
		ch=fgetc(fp);
		cp=ftell(fp);
		printf("\nCurrent position of file %d ",cp);
		printf("\nCharacter= %c",ch);

		fseek(fp,5,1);
		ch=fgetc(fp);
		cp=ftell(fp);
		printf("\nCurrent position of file %d ",cp);
		printf("\nCharacter= %c",ch);

		fseek(fp,-3,2);
		ch=fgetc(fp);
		cp=ftell(fp);
		printf("\nCurrent position of file %d ",cp);
		printf("\nCharacter= %c",ch);

	fclose(fp);
	return 0;
}
