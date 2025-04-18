/*
 * fprintf_fscanf.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	FILE *fptr;
	int id,score;
	char name[255];

/*
	fptr = fopen("student.txt","w");

		if(fptr != NULL)
		{
			printf("File is created successfully\n");
		}
		else
		{
			printf("Failed to create the file\n");
			exit(-1);
		}

		printf("Enter Details of 4 students\n");
		for(int i=0;i<4;i++)
		{
			printf("Enter student name=");
			scanf("%s" ,name);

			printf("Enter student id=");
			scanf("%d" ,&id);

			printf("Enter score of student=");
			scanf("%d" ,&score);

			fprintf(fptr ," %d %s %d" ,id,name,score);
		}
	fclose(fptr);
*/

	fptr = fopen("student.txt","r");

		while((fscanf(fptr ,"%d %s %d" ,&id,name,&score)) != EOF)
		{
			printf("\nStudent details:\n");

			printf("Id=%d\n",id);
			printf("Name=%s\n",name);
			printf("Score=%d\n",score);
		}
		printf("\nEnd of File");

	fclose(fptr);
	return 0;
}
