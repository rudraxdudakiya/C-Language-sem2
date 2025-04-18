/*
 * FILE_student.c
 *
 *  Created on: 15-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int no_of_record = 0;

struct student
{
	int rollno,sub1,sub2,sub3;
	char name[20];
	float per;
}stud ,temp;

int avlrollno(int);
int get_no_of_record(void);
void printmenu(void);
void insert(void);
void display(void);
void search(void);
void searchbyname(void);
void searchbyper(void);
void delete(void);
void update(void);
void sort(void);
int empty(void);

int main()
{
	setbuf(stdout,NULL);
	int c,emp;

	do
	{
		printmenu();
		printf("\nEnter your choice:");
		scanf("%d" ,&c);
		printf("\n");

		switch(c)
		{
			case 1:
				insert();
				break;
			case 2:
				emp=empty();
				if(emp==0)
				{
					printf("\nFile is empty\n");
				}
				else
				{
					display();
				}
				break;
			case 3:
				search();
				break;
			case 4:
				delete();
				break;
			case 5:
				update();
				break;
			case 6:
				emp=empty();
				if(emp==0)
				{
					printf("\nThe File is Empty\n");
				}
				else
				{
					sort();
				}
				break;
			case 7:
				searchbyname();
				break;
			case 8:
				searchbyper();
				break;
			default:
				printf("Exited from Application");
				exit(1);
				break;
		}
	}while(c!=9);
	return 0;
}

int avlrollno(int rno)
{
	FILE *fp;
	fp = fopen("Student_Record.txt","r");

		while(fread(&stud,sizeof(stud),1,fp))
		{
			if(rno == stud.rollno)
			{
				fclose(fp);
				return 1;
			}
		}

	fclose(fp);
	return 0;
}

int get_no_of_record(void)
{
	FILE *fp;

	fp = fopen("Student_Record.txt","r");

		no_of_record=0;
		while(fread(&stud,sizeof(stud),1,fp))
		{
			no_of_record += 1;
		}

	fclose(fp);
	return no_of_record;
}

void printmenu(void)
{
	printf("\n\t1.Insert Records");
	printf("\n\t2.Display Records");
	printf("\n\t3.search rollno");
	printf("\n\t4.deletion of record");
	printf("\n\t5.upadate record");
	printf("\n\t6.sort by percentage");
	printf("\n\t7.search by name");
	printf("\n\t8.search by percentage");
	printf("\n\t9.exit");
}

void insert(void)
{
	FILE *fp1;

	fp1 = fopen("Student_Record.txt","a");

		printf("Enter the rollno= ");
		scanf("%d" ,&stud.rollno);

		printf("Enter the name= ");
		scanf("%s" ,stud.name);

		printf("Enter the marks of 201 202 203= ");
		scanf("%d%d%d" ,&stud.sub1,&stud.sub2,&stud.sub3);

		stud.per = (float) ((stud.sub1 + stud.sub2 + stud.sub3) /3);

		fwrite(&stud,sizeof(stud),1,fp1);

	fclose(fp1);
}

void display(void)
{
	FILE *fp2;

	fp2 = fopen("Student_Record.txt","r");

		printf("\nRollNo\tName\t201\t202\t203\tPercentage\n\n");
		while(fread(&stud,sizeof(stud),1,fp2))
		{
			printf("%d\t%s\t%d\t%d\t%d\t%.2f\n" ,stud.rollno,stud.name,stud.sub1,stud.sub2,stud.sub3,stud.per);
		}

	fclose(fp2);
}

void search(void)
{
	FILE *fp3;
	int r,s,c=0;

	printf("Enter the rollno you want to search:");
	scanf("%d" ,&r);

	int avl=avlrollno(r);
	if(avl == 0)
	{
		printf("%d isn't available in the file\n" ,r);
	}
	else
	{
		fp3 = fopen("Student_Record.txt","r");

			while(fread(&stud,sizeof(stud),1,fp3))
			{
				s = stud.rollno;
				if(r == s)
				{
					printf("%d\t%s\t%d\t%d\t%d\t%.2f\n",stud.rollno,stud.name,stud.sub1,stud.sub2,stud.sub3,stud.per);
					c++;
				}
			}
			if(c==0)
			{
				printf("NO RECORD MATCHED WITH %d\n" ,r);
			}

		fclose(fp3);
	}
}

void searchbyname(void)
{
	FILE *fp3;
	char sname[50];
	int c=0;

	printf("Enter the name you want to search:");
	scanf("%s" ,sname);

	fp3 = fopen("Student_Record.txt","r");
		while(fread(&stud,sizeof(stud),1,fp3))
		{
			if(strcmp(sname,stud.name) == 0)
			{
				printf("%d\t%s\t%d\t%d\t%d\t%.2f\n",stud.rollno,stud.name,stud.sub1,stud.sub2,stud.sub3,stud.per);
				c+=1;
			}
		}
		printf("%d record found\n" ,c);


		fclose(fp3);
}

void searchbyper(void)
{
	FILE *fp3;
	int c=0,s;
	float l,h;

	printf("Enter the percentage range (lower and higher):");
	scanf("%f%f" ,&l,&h);

	fp3 = fopen("Student_Record.txt","r");

		while(fread(&stud,sizeof(stud),1,fp3))
		{
			s = stud.per;
			if(s >= l && s <= h)
			{
				printf("%d\t%s\t%d\t%d\t%d\t%.2f\n",stud.rollno,stud.name,stud.sub1,stud.sub2,stud.sub3,stud.per);
				c++;
			}
		}
		if(c==0)
			printf("NO RECORD MATCHED WITH RANGE");
		else
			printf("%d RECORD FOUND" ,c);

		fclose(fp3);
}

void delete(void)
{
	FILE *fpo,*fpt;

	int r;
	printf("Enter the ROllno you want to delete:");
	scanf("%d" ,&r);

	if(avlrollno(r) == 0)
	{
		printf("%d isn't available in the file\n" ,r);
	}
	else
	{
		fpo = fopen("Student_Record.txt","r");
		fpt = fopen("Temp.txt","w");

			while(fread(&stud,sizeof(stud),1,fpo))
			{
				if(r != stud.rollno)
					fwrite(&stud,sizeof(stud),1,fpt);
			}

		fclose(fpo);
		fclose(fpt);

		fpo = fopen("Student_Record.txt","w");
		fpt = fopen("Temp.txt","r");

			while(fread(&stud,sizeof(stud),1,fpt))
			{
				fwrite(&stud,sizeof(stud),1,fpo);
			}
			printf("\nRECORD DELETED");

		fclose(fpo);
		fclose(fpt);
	}
}

void update(void)
{
	FILE *fpt,*fpo;

	int avl,r,s,ch,c=0;

	printf("\nEnter the Roll no to update:");
	scanf("%d" ,&r);

	avl=avlrollno(r);
	if(avl == 0)
	{
		printf("%d isn't available in the file\n" ,r);
	}
	else
	{
		fpo = fopen("student_Record.txt","r");
		fpt = fopen("Temp.txt","w");

			while(fread(&stud,sizeof(stud),1,fpo))
			{
				s = stud.rollno;
				if(r != s)
				{
					fwrite(&stud,sizeof(stud),1,fpt);
				}
				else
				{
					printf("\n\t1.Update name of RollNo %d" ,r);
					printf("\n\t2.Update marks of RollNo %d" ,r);
					printf("\n\t3.Update both name and marks of RollNo %d" ,r);

					printf("\nEnter your choice=");
					scanf("%d" ,&ch);

					switch(ch)
					{
						case 1:
							printf("Enter new name:");
							scanf("%s" ,stud.name);
							c=1;
							break;
						case 2:
							printf("Enter new marks:");
							scanf("%d%d%d" ,&stud.sub1,&stud.sub2,&stud.sub3);
							stud.per  = (float) ((stud.sub1 + stud.sub2 + stud.sub3) /3);
							c=1;
							break;
						case 3:
							printf("Enter new name:");
							scanf("%s" ,stud.name);

							printf("Enter new marks:");
							scanf("%d%d%d" ,&stud.sub1,&stud.sub2,&stud.sub3);
							stud.per  = (float) ((stud.sub1 + stud.sub2 + stud.sub3) /3);
							c=1;
							break;
						default:
							printf("Invalid Selection");
							break;
					}
					fwrite(&stud,sizeof(stud),1,fpt);
				}
			}

		fclose(fpo);
		fclose(fpt);
	}

	fpo = fopen("Student_Record.txt","w");
	fpt = fopen("Temp.txt","r");

		while(fread(&stud,sizeof(stud),1,fpt))
		{
			fwrite(&stud,sizeof(stud),1,fpo);
		}
	fclose(fpo);
	fclose(fpt);
	if(c==1)
		printf("\nRECORD UPDATED");
}

void sort(void)
{
	int a[20],count=0,i,j,t,c;
	int size = get_no_of_record();
	struct student *p;

	p = (struct student *) calloc(size,sizeof(struct student));

	FILE *fpo;

	fpo = fopen("Student_Record.txt","r");
		for(i=0;i<size;i++)
		{
			fread(p+i,sizeof(stud),1,fpo);
		}
		c = size;
		printf("\nRollNo\tName\t201\t202\t203\tPercentage\n\n");
		for(int i=0;i<c;i++)
		{
			printf("%d\t%s\t%d\t%d\t%d\t%.2f\n" ,(p+i)->rollno,(p+i)->name,(p+i)->sub1,(p+i)->sub2,(p+i)->sub3,(p+i)->per);
		}

		for(i=0;i<c;i++)
		{
			for(j=1;j<c;j++)
			{
				if( ((p+i)->per) < ((p+j)->per))
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}
		printf("\nRollNo\tName\t201\t202\t203\tPercentage\n\n");
		for(int i=0;i<c;i++)
		{
			printf("%d\t%s\t%d\t%d\t%d\t%.2f\n" ,(p+i)->rollno,(p+i)->name,(p+i)->sub1,(p+i)->sub2,(p+i)->sub3,(p+i)->per);
		}

	fclose(fpo);
}

int empty(void)
{
	int c=0;
	FILE *fp;
	fp = fopen("Student_Record.txt","r");

		while(fread(&stud,sizeof(stud),1,fp))
		{
			c=1;
		}

	fclose(fp);
	return c;
}
