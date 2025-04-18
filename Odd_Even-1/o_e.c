/*
 * o_e.c
 *
 *  Created on: 31-Mar-2024
 *      Author: Rudrax
 */


#include<stdio.h>
#include<stdlib.h>

#define size 10

int main()
{
	setbuf(stdout,NULL);
	FILE *fp,*fodd,*feven;
	int i,no;

	fp=fopen("Numbers.txt","w");

		for(i=0;i<size;i++)
		{
			scanf("%d",&no);
			putw(no,fp);
		}

	fclose(fp);

	fp=fopen("Numbers.txt","r");
	feven=fopen("Even.txt","w");
	fodd=fopen("Odd.txt","w");

		while((no=getw(fp)) != EOF)
		{
			if(no%2!=0)
				putw(no,fodd);
			else
				putw(no,feven);
		}

	fclose(fodd);
	fclose(feven);
	fclose(fp);

	feven=fopen("Even.txt","r");

		printf("\nEven:");
		while((no=getw(feven)) != EOF)
		{
			printf("%d\t",no);
		}

	fclose(feven);

	fodd=fopen("Odd.txt","r");

		printf("\nOdd:");
		while((no=getw(fodd)) != EOF)
		{
			printf("%d\t",no);
		}

	fclose(fodd);

	return 0;
}
