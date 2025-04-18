/*
 * stud.c
 *
 *  Created on: 18-Apr-2024
 *      Author: Rudrax
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int total_records = 0;

struct student{
    int rno,sub1,sub2,sub3;
    float per;
    char name[100];
}stud;

void printmenu(void);
//int how_many_records(void);
void take_input(void);
void display(void);


void printmenu(void)
{
    printf("\n\nWhich functionality you would like to chose :\n\n1.Add Record into File \"Student_Records.txt\" \n2.Show All available records from \"Student_Records.txt\" \n3.Exit");
}

void take_input(void)
{
    FILE *fp;

    fp = fopen("Student_records.txt","a");

    printf("\nEnter the following details:\nRoll number :");
    scanf("%d" ,&stud.rno);

    printf("Name :");
    scanf("%s",stud.name);

    printf("Marks of subject 1,2 & 3 respectively(out of 100) :");
    scanf("%d%d%d",&stud.sub1,&stud.sub2,&stud.sub3);

    int total = stud.sub1+stud.sub2+stud.sub3;
    stud.per=(float)total/3;

    fwrite(&stud,sizeof(stud),1,fp);

    fclose(fp);
}

void display(void)
{
	printf("\nRollNo.\tName\tSub1\tSub2\tSub3\tPercentage\n\n");
    FILE *fp;
    fp = fopen("Student_records.txt","r");

    while(fread(&stud,sizeof(stud),1,fp))
    {
        printf("%d\t%s\t%d\t%d\t%d\t%.2f" ,stud.rno,stud.name,stud.sub1,stud.sub2,stud.sub3,stud.per);
    }
}

int main()
{
    int c;
    do{
        printmenu();
        printf("\n\nEnter your choice:");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
                take_input();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("You are successfully come out from the program!\nsee you again.....");
                exit(1);
                break;
            default:
                printf("Invalid Choice");
                main();
        }

    }while(c != 3);
}
