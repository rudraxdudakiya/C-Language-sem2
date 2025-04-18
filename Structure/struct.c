/*
 * struct.c
 *
 *  Created on: 08-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct car
{
	char brandname[20];
	char model[20];
	char owner[20];
	char country[20];
	char state[20];
	char fueltype[20];
	float price;
}c1;
int main()
{
	printf("Enter the following details:");
	printf("\nBrand name=");
	scanf("%s",c1.brandname);
	printf("\nModel=");
	scanf("%s",c1.model);
	printf("\nOwner name=");
	scanf("%s",c1.owner);
	printf("\nCountry=");
	scanf("%s",c1.country);
	printf("\nState=");
	scanf("%s",c1.state);
	printf("\nFuel type=");
	scanf("%s",c1.fueltype);
	printf("\nPrice=");
	scanf("%f",&c1.price);

	printf("\nBrand\tModel\tOwner\tCountry\tState\tFule\tPrice");
	printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%f",c1.brandname,c1.model,c1.owner,c1.country,c1.state,c1.fueltype,c1.price);
	return 0;
}
