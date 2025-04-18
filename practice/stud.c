#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rno,sub1,sub2,sub3;
    float per;
    char name[50];
}stud;

int record=0;
void printmenu(void)
{
    printf("\n1.Add Student Record\n2.Display all records\n3.Exit\n\n");
}

int get_no_of_record(void)
{
    FILE *fp;

    fp = fopen("Student.txt" ,"r");

        while(fread(&stud ,sizeof(stud) ,1 ,fp))
        {
            record += 1;
        }
    fclose(fp);
    return record;
}
void insert_record(void)
{
    printf("\n%d record are available in FILE \"Student.txt\"\n",record);

    FILE *fp;

    fp = fopen("Student_records.txt" ,"a");

    if(fp == NULL)
    {
        exit(-1);
    }

        printf("\nEnter following details :\n\nRoll number :");
        scanf("%d" ,&stud.rno);

        printf("\nName :");
        scanf("%s" ,stud.name);

        printf("\nMarks out of 100 for C-II,DBMS,Practical-2 respectively :\n");
        scanf("%d%d%d" ,&stud.sub1 ,&stud.sub2 ,&stud.sub3);

        stud.per = (float)( (stud.sub1 + stud.sub2 + stud.sub3)/3 );

        fwrite(&stud ,sizeof(stud) ,1 ,fp);

    fclose(fp);
}

void display(void)
{
    FILE *fp;

    fp = fopen("Student_records.txt" ,"r");
    if(fp == NULL)
    {
        exit(-1);
    }

        if(get_no_of_record() != 0)
        {
            printf("\n\nRollNo.\tName\tC-II\tDBMS\tPractical\tPercentage\n\n");

            while(fread(&stud ,sizeof(stud) ,1 ,fp))
            {
                printf("%d\t%s\t%d\t%d\t%d\t%.2f\n" ,stud.rno ,stud.name ,stud.sub1 ,stud.sub2 ,stud.sub3 ,stud.per);
            }

            printf("\n%d record are available in FILE \"Student.txt\"\n",record);
        }
        else
            printf("\nFILE is currently empty\n");

    fclose(fp);
}

int main()
{
	setbuf(stdout,NULL);
    int c;
    do{
        printmenu();
        printf("Enter your choice:");
        scanf("%d" ,&c);

        switch(c)
        {
            case 1:
                insert_record();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("\nSuccessfully exiting..\n");
                exit(1);

            default :
                printf("\nInvalid choice\n");
                main();
        }
    }while(c != 3);
    return 0;
}
