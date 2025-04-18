/*
 * odd_even.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);
	FILE *fp,*fodd,*feven;

	int no,i;

	fp = fopen("numbers.txt","a");

		printf("Enter 5 random numbers\n");
		for(i=0;i<5;i++)
		{
			scanf("%d" ,&no);
			putw(no,fp);
		}

	fclose(fp);

	fp = fopen("numbers.txt","r");
	fodd = fopen("odd.txt","a");
	feven = fopen("even.txt","a");

		while((no=getw(fp)) != EOF)
		{
			if(no % 2 == 0)
				putw(no,feven);
			else
				putw(no,fodd);
		}

	fclose(fp);
	fclose(fodd);
	fclose(feven);


	fp = fopen("numbers.txt","r");
	fodd = fopen("odd.txt","r");
	feven = fopen("even.txt","r");

		printf("\nNumbers availabe in numbers.txt file\n");
		while((no=getw(fp)) != EOF)
		{
			printf("%d\t",no);
		}

		printf("\nNumbers availabe in odd.txt file\n");
		while((no=getw(fodd)) != EOF)
		{
			printf("%d\t",no);
		}

		printf("\nNumbers availabe in even.txt file\n");
		while((no=getw(feven)) != EOF)
		{
			printf("%d\t",no);
		}

	fclose(fp);
	fclose(fodd);
	fclose(feven);

	return 0;
}
