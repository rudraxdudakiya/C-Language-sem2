#include <stdio.h>

void input(int m,int n,int (*p)[n])
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element [%d][%d] : ",i,j);
			scanf("%d",(*(p+i)+j));
		}
	}

	return;
}
void print(int m,int n,int (*ptr)[n])
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));
		}
		printf("\n");
	}

	return;
}

void mul(int m,int n,int (*p)[n],int (*p1)[n])
{
    int mul[m][n],i,j,k,sum;
    int (*ptr)[n] = mul;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            *(*(ptr+i)+j) = *(*(p+j)+i);
        }
    }
    print(m,n,ptr);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            *(*(ptr+i)+j) = *(*(p1+j)+i);
        }
    }
    print(m,n,ptr);
    
}
// void multi(int m,int n,int (*p)[n],int (*p1)[n])
// {
// 	int mul[m][n],i,j,k,sum;

// 	int (*ptr)[n] = mul;

// 	for(i=0;i<m;i++)
// 	{
// 		for(j=0;j<m;j++)
// 		{
// 			sum =0;
// 			for(k=0;k<n;k++)
// 			{
// 				sum = sum + *(*(p+i)+k)  *  *(*(p1+k)+j);
// 			}
// 			*(*(ptr+i)+j) = sum;
// 		}
// 	}
// 	printf("\nMultiplication\n");
// 	print(m,n,ptr);
// 	return;
// }

int main()
{
    int r,c;
    printf("Enter the rows and columns of matrix");
    scanf("%d%d" ,&r,&c);
    int a[r][c],b[c][r];
    input(r,c,a);
    input(r,c,b);
    print(r,c,a);
    print(r,c,b);

    mul(r,c,a,b);
    return 0;
}