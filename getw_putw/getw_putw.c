/*
 * getw_putw.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


/*
 * putw_getw.c
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
	int no,i;

	fp = fopen("integers.txt","a");

		printf("Enter 5 random numbers\n");
		for(i=0;i<5;i++)
		{
			scanf("%d" ,&no);
			putw(no,fp);
		}

	fclose(fp);

	fp = fopen("integers.txt","r");

		while((no=getw(fp)) != EOF)
		{
			printf("%d\n" ,no);
		}

	fclose(fp);
	return 0;
}
