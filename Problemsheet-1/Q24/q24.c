/*
 * q24.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void input(int [],int);
void print(int [],int);
void asort(int [],int);
void merge(int [],int,int [],int,int [],int);
int main()
{
	int n;
	printf("A.Enter size of first array=");
	scanf("%d",&n);
	int a[n];
	input(a,n);
	print(a,n);

	int m;
	printf("\nA.Enter size of second array=");
	scanf("%d",&m);
	int b[m];
	input(b,m);
	print(b,m);

	asort(a,n);
	printf("\nB.Array-1 Sorting in Ascending Order:\n");
	print(a,n);

	asort(b,m);
	printf("\nB.Array-2 Sorting in Ascending Order:\n");
	print(b,m);

	int k=n+m;
	int c[k];
	printf("\nC.Merged Array\n");
 	merge(a,n,b,m,c,k);
 	print(c,k);
 	asort(c,k);

 	printf("\nD.Merged array Sorting in Ascending Order:\n");
 	print(c,k);
	return 0;
}
void input(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&x[i]);
	}
	return;
}

void print(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	return;
}

void asort(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	return;
}
void merge(int x[],int n,int y[],int m,int c[],int l)
{
	int i=0,j=0,k=0;
	while(i!=n)
	{
		c[i]=x[i];
		i++;
	}
	j=i;
	while(j!=l)
	{
		c[j]=y[k];
		k++;
		j++;
	}

}
