/*
 * fread_fwrite.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	setbuf(stdout,NULL);
	struct student s;

	FILE *fp;

//	fp = fopen("student","w");
//
//		for(int i=0;i<=3;i++)
//		{
//			printf("Enter student Roll no,Name,Percentage=");
//			scanf("%d %s %f" &s.rno,s.name,&s.per);
//
//			fwrite(&s ,sizeof(s) ,1 ,fp);
//		}
//
//	fclose(fp);

	fp = fopen("student","r");

		while(fread(&s ,sizeof(s) ,1 ,fp))
		{
			printf("%d %s %.2f\n" ,s.rno,s.name,s.per);
		}

	fclose(fp);
	return 0;
}
