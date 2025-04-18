/*
 * fgets_fputs.c
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
	char str[25];

	printf("Enter the string=");
	scanf("%s" ,str);

	fp = fopen("temp.txt","w");

		fputs(str,fp);

	fclose(fp);

	fp = fopen("temp.txt","r");

		fgets(str,50,fp);

	fclose(fp);
	printf("String from temp.txt = %s" ,str);
	return 0;
}
