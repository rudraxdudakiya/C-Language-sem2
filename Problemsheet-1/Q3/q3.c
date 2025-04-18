/*
 * q3.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */


#include <stdio.h>
#include <string.h>
struct Hotel
{
    char name[50];
    char address[100];
    int grade;
    float avgRoomCharge;
    int noRooms;
};
void HotelGrade(struct Hotel hotels[], int n, int grade);
void HotelCharge(struct Hotel hotels[], int n, float maxCharge);

int main()
{
    int grade,n;
    float maxCharge;
    printf("enter the member:");
    scanf("%d",&n);
    struct Hotel hotels[n];
    for (int i=0;i<n;i++)
    {
    	printf("\nEnter details for hotel %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", hotels[i].name);
        printf("Address: ");
        scanf("%s", hotels[i].address);
        printf("Grade: ");
        scanf("%d", &hotels[i].grade);
        printf("Average Room Charge: ");
        scanf("%f", &hotels[i].avgRoomCharge);
        printf("Number of Rooms: ");
        scanf("%d", &hotels[i].noRooms);
    }
    printf("Available Hotels:\nName\tAddress\tGrade\tAverageCharge\tNo.Rooms\n");
    for (int i = 0;i<n;i++)
    {
    	 printf("%s\t%s\t%d\t%.2f\t%d\n",hotels[i].name,hotels[i].address,hotels[i].grade,hotels[i].avgRoomCharge,hotels[i].noRooms);
    }
    // Get grade from user
    printf("\nEnter grade to display hotels of that grade in order of charges: ");
    scanf("%d", &grade);
    HotelGrade(hotels, n, grade);

    // Get maximum charge
    printf("\nEnter maximum charge to display hotels with charges less than that: ");
    scanf("%f", &maxCharge);
    HotelCharge(hotels, n, maxCharge);

    return 0;
}

void HotelGrade(struct Hotel hotels[], int n, int grade)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (hotels[i].avgRoomCharge < hotels[j].avgRoomCharge)
            {
                struct Hotel temp = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = temp;
            }
        }
    }
    printf("Grade= %d\n", grade);
    for (int i=0;i<n;i++)
    {
    	if (hotels[i].grade == grade)
    	{
    		printf("Available Hotels:\nName\tAddress\tAverageCharge\tNo.Rooms\n");
    		break;
    	}
    	else
        {
    	     printf("\n%d grade hotel not available",grade);
    	     break;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (hotels[i].grade == grade)
        {
        	 printf("%s\t%s\t%.2f\t%d\n",hotels[i].name,hotels[i].address,hotels[i].avgRoomCharge,hotels[i].noRooms);
        }
    }
}

void HotelCharge(struct Hotel hotels[], int n, float maxCharge)
{
    int flag=0;
	 printf("Maximum charge= %f\n",maxCharge);
	 for (int i=0;i<n;i++)
	 {
	    if (hotels[i].avgRoomCharge < maxCharge)
	    {
	    	printf("Available Hotels:\nName\tAddress\tGrade\tAverageCharge\tNo.Rooms\n");
	    	break;
	    }
	}
    for (int i=0;i<n;i++)
    {
        if (hotels[i].avgRoomCharge < maxCharge)
        {
        	printf("%s\t%s\t%d\t%.2f\t%d\n",hotels[i].name,hotels[i].address,hotels[i].grade,hotels[i].avgRoomCharge,hotels[i].noRooms);
            flag++;
        }
    }
    printf("%d hotel available less than %.2f",flag,maxCharge);
}
