/*
 * book.c
 *
 *  Created on: 10-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#define size 3
struct book
{
	int id;
	char name[30];
	char author[30];
	char publisher[20];
	char lang[10];
	int nopage;
	float price;
}b[size];
int main()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter Book Id");
		scanf("%d",&b[i].id);

		printf("Enter Book Name");
		scanf("%s",b[i].name);

		printf("Enter author name");
		scanf("%s",b[i].author);

		printf("Enter publisher");
		scanf("%s",b[i].publisher);

		printf("Enter language");
		scanf("%s",b[i].lang);

		printf("Enter total number of pages");
		scanf("%d",&b[i].nopage);

		printf("Enter price");
		scanf("%f",&b[i].price);
	}

	printf("\nId\tName of Book\tAuthor\tPublisher\tLanguage\tCategory\tTotal pages\tPrice");
	for(i=0;i<size;i++)
	{
		printf("\n%d\t%s\t%s\t%s\t%s\t%d\t%.2f",b[i].id,b[i].name,b[i].author,b[i].publisher,b[i].lang,b[i].nopage,b[i].price);
	}

	return 0;
}
