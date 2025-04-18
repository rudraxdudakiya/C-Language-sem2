/*
 * p2d-2.c
 *
 *  Created on: 15-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int (*p)[3],(*ptr)[3];
	int i=0,j=0;

	printf("a=%u",a);//&a[0][0]
	printf("\n(*(*a+0))=%d",(*(*(a+0))));

	printf("\na+1=%u",a+1);
	printf("\n*(*a+1)=%d",(*(*(a+1))));

	printf("\na+1=%u",a+2);
	printf("\n*(*(a+2))=%d",(*(*(a+2))));

	p=a;
	printf("\np=%u",p);
	printf("\n*p=%d",*(*p));

	printf("\np+1=%u",p+1);
	printf("\n*p+1=%d",*(*(p+1)));

	printf("\np+2=%u",p+2);
	printf("\n*p+2=%d",*(*(p+2)));

	ptr=a;
	printf("\nptr=%u",ptr);
	printf("\nptr=%d",*(*(ptr)));

	printf("\nptr=%u",ptr+1);
	printf("\nptr=%d",*(*(ptr+1)));

	printf("\nptr=%u",ptr+2);
	printf("\nptr=%d",*(*(ptr+2)));

	p=a;
	for(i=0;i<3;i++)
	{
		printf("\np=%u",p+i);//points to the ith row
		printf("\t*(p+i)=%u",*(p+i));//points to the jth column
		printf("\t*(*(p+i))=%u",(*(*(p+i))));//gives the value of array a[0][i];
	}

	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("*(*(p+%d)+%d)=%d\n",i,j,(*(*(p+i)+j)));
		}
	}

	return 0;
}
