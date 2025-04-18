/*
 * union.c
 *
 *  Created on: 10-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct temp
{
	int a;
	char b;
	double c;
};
union temp1
{
	int a;
	char b;
	double c;
};
int main()
{
	struct temp t1;
	union temp1 t2;
	printf("size of structure=%d",sizeof(t1));
	printf("\nsize of union=%d",sizeof(t2));

	t2.a=100;
	printf("\n%d",t2.a);
	t2.c=10.4352;
	printf("\n%f",t2.c);
	printf("\n%d",t2.a);//display garbage value
	return 0;
}
/*
 * Structure inside Union
 struct device
 {
 	 char name[20;
 	 char model[20];
 	 float price;
 	 unionIP
 	 {
 	 	 char decimal[16];
 	 	 char octal[8];
 	 	 char binary[36];
 	 	 char hexa[12];
 	 }ip;
 }d1;
 */
