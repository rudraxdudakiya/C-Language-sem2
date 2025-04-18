/*
 * q1.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
#define size 5
struct census
{
	char city[20];
	int population;
	float literacy;
}c[size];
struct census input(void);
void print(struct census);
void lsort(struct census);
void psort(struct census);
void csort(struct census);
int main()
{
	int i;
	printf("Enter %d name of City,Population,Literacy level\n",size);
	for(i=0;i<size;i++)
	{
		c[i]=input();
	}
	printf("City\tPopulation\tLiteracy level\n");
	for(i=0;i<size;i++)
	{
		print(c[i]);
	}
	for(i=0;i<size;i++)
	{
		csort(c[i]);
	}
	printf("Sorted Alphabetically\nCity\tPopulation\tLiteracy level\n");
	for(i=0;i<size;i++)
	{
		print(c[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		lsort(c[i]);
	}
	printf("Sorted based on Literacy level\nCity\tPopulation\tLiteracy level\n");
	for(i=0;i<size;i++)
	{
		print(c[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		psort(c[i]);
	}
	printf("Sorted based on Population\nCity\tPopulation\tLiteracy level\n");
	for(i=0;i<size;i++)
	{
		print(c[i]);
	}
	return 0;
}
struct census input(void)
{
		struct census c1;
		scanf("%s%d%f",c1.city,&c1.population,&c1.literacy);
		return c1;
}

void print(struct census c1)
{
		printf("%s\t%d\t\t%.2f\n",c1.city,c1.population,c1.literacy);
		return ;
}
void csort(struct census c3)
{
	struct census temp;
	int i,j;

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(strcmp(c[i].city,c[j].city) > 0)
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	return;
}
void lsort(struct census c1)
{
	struct census temp;
	int i,j;

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(c[i].literacy<c[j].literacy)
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	return;
}
void psort(struct census c2)
{
	struct census temp;
	int i,j;

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(c[i].population<c[j].population)
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	return;
}
