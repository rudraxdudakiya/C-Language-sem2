/*
 * police.c
 *
 *  Created on: 20-Mar-2024
 *      Author: Rudrax
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int no_of_record =0;

struct police
{
	int pid;
	char name[20];
	char position[20];
	float salary;
	char city[20];
}p;


//Function to print Menu...
void printmenu()
{
	printf("\n\t\t----------");
	printf("\n\t\t1.Insert");
	printf("\n\t\t2.Display");
	printf("\n\t\t3.Search");
	printf("\n\t\t4.Update");
	printf("\n\t\t5.Delete");
	printf("\n\t\t6.Sort");
	printf("\n\t\t7.Total Record in File");
	printf("\n\t\t8.Exit");
	printf("\n\t\t----------\n");
}


//Function to check availability of Pid....
int avlpid(int pid)
{
	FILE *fp;
	//int c=0;

	fp = fopen("Police_Record","r");

		while(!feof(fp))
		{
			fread(&p,sizeof(p),1,fp);
			if(pid == p.pid)
			{
				fclose(fp);
				return 1;
			}
		}

	fclose(fp);

	return 0;
}


//Function to get total no. of record in file....
int get_no_record()
{
	FILE *fp;

	fp = fopen("Police_Record","r");

		 no_of_record=0;
		 while(fread(&p,sizeof(p),1,fp))
		 {
		 	no_of_record = no_of_record+1;
		 }

	fclose(fp);

	return no_of_record;
}


//Inserting....
void insert()
{
	FILE *fp;
	int id;

	fp = fopen("Police_Record","a");

		 printf("\nEnter the id of police:");
		 scanf("%d" ,&id);

		 if(avlpid(id) == 0)
		 {
			 p.pid = id;

			 printf("Enter the name:");
		 	 scanf("%s" ,p.name);

		 	 printf("Enter the position:");
		 	 scanf("%s" ,p.position);

		 	 printf("Enter the salary:");
		 	 scanf("%f" ,&p.salary);

		 	 printf("Enter the city:");
		 	 scanf("%s" ,p.city);

		 	 fwrite(&p,sizeof(p),1,fp);
		 }
		 else
		 {
			 printf("\nPolice ID %d is already existed in file" ,p.pid);
		 }
	fclose(fp);

}


//Checking that file is empty or not....
int empty()
{
	int c=0;

	FILE *fp;
	fp = fopen("Police_Record","r");

		while( fread(&p,sizeof(p),1,fp) )
		{
			c=1;
		}

	fclose(fp);
	return c;
}


//Displaying....
void display()
{
	FILE *fp1;

	fp1 = fopen("Police_Record","r");

		printf("\nPID\t\tName\t\tPost\t\tSalary\t\t\tCity\n\n");
		while( fread(&p,sizeof(p),1,fp1) )
		{
			printf("%d\t\t%s\t\t%s\t\t%.2f\t\t%s\n" ,p.pid ,p.name ,p.position ,p.salary ,p.city);
		}

	fclose(fp1);
}


//Searching....

	//option 1:
void search_byid()
{
	FILE *fp2;
	int searchid,s;
	printf("\nEnter the Police ID to search:");
	scanf("%d" ,&searchid);
	if(avlpid(searchid) == 0)
	{
		printf("\nPolice id %d is not available in file" ,searchid);
	}
	else
	{
		fp2 = fopen("Police_Record","r");

			while( fread(&p,sizeof(p),1,fp2) )
			{
				s = p.pid;
				if(s == searchid)
					printf("%d\t%s\t%s\t%.2f\t%s\n" ,p.pid ,p.name ,p.position ,p.salary ,p.city);
			}

		fclose(fp2);
	}
}

	//option 2:
void search_byName()
{
	FILE *fp3;
	char sname[50];
	int c=0;

	printf("Enter the name you want to search:");
	scanf("%s" ,sname);

	fp3 = fopen("Police_Record","r");
		while(fread(&p,sizeof(p),1,fp3))
		{
			if(strcmp(sname,p.name) == 0)
			{
				printf("%d\t%s\t%s\t%.2f\t%s\n",p.pid,p.name,p.position,p.salary,p.city);
				c+=1;
			}
		}
		if(c==0)
			printf("No recored matched with %s" ,sname);
		else
			printf("%d record found\n" ,c);

	fclose(fp3);
}

	//option 3:
void search_byPosition()
{
	FILE *fp3;
	char spos[50];
	int c=0;

	printf("\nEnter the position you want to search:");
	scanf("%s" ,spos);

	fp3 = fopen("Police_Record","r");

		while(fread(&p,sizeof(p),1,fp3))
		{
			if(strcmp(spos,p.position) == 0)
			{
				printf("%d\t%s\t%s\t%.2f\t%s\n",p.pid,p.name,p.position,p.salary,p.city);
				c+=1;
			}
		}
		if(c==0)
			printf("\nNo recored matched with %s\n" ,spos);
		else
			printf("\n%d record found\n" ,c);

	fclose(fp3);
}

	//option 4:
void search_byCity()
{
	FILE *fp3;
	char scity[50];
	int c=0;

	printf("\nEnter the city you want to search:");
	scanf("%s" ,scity);

	fp3 = fopen("Police_Record","r");
		while(fread(&p,sizeof(p),1,fp3))
		{
			if(strcmp(scity,p.city) == 0)
			{
				printf("%d\t%s\t%s\t%.2f\t%s\n",p.pid,p.name,p.position,p.salary,p.city);
				c+=1;
			}
		}
		if(c==0)
			printf("\nNo recored matched with %s\n" ,scity);
		else
			printf("\n%d record found\n" ,c);

	fclose(fp3);
}

	//option 5:
void search_bySalary()
{
	FILE *fp2;
	float lower,higher;
	int c=0;

	printf("\nEnter the Salary to search(lower and higher):");
	scanf("%f%f" ,&lower,&higher);

	fp2 = fopen("Police_Record","r");

		while( fread(&p,sizeof(p),1,fp2) )
		{
			if(p.salary >= lower && p.salary <= higher)
			{
				printf("%d\t%s\t%s\t%.2f\t%s\n" ,p.pid ,p.name ,p.position ,p.salary ,p.city);
				c+=1;
			}
		}
		if(c==0)
			printf("\nNo record matched with range\n");
		else
			printf("\n%d record found\n" ,c);

	fclose(fp2);
}

void search()
{
	int ch;
	do{
	printf("\n1.Search by id");
	printf("\n2.Search by name");
	printf("\n3.Search by position");
	printf("\n4.Search by city");
	printf("\n5.Search by salary");
	printf("\n6.Exit from searching");

	printf("\n\nEnter your choice:");
	scanf("%d" ,&ch);

	switch(ch)
	{
		case 1:
			search_byid();
			break;
		case 2:
			search_byName();
			break;
		case 3:
			search_byPosition();
			break;
		case 4:
			search_byCity();
			break;
		case 5:
			search_bySalary();
			break;
		case 6:
			main();
			break;
		default:
			printf("\nEnter valid choice");
	}
	}while(ch!=6);
}


//Function to update....
void update(void)
{
	FILE *fpt,*fpo;

	int avl,search_id,ch,c=0;

	printf("\nEnter the Police id to update:");
	scanf("%d" ,&search_id);

	avl=avlpid(search_id);
	if(avl == 0)
	{
		printf("%d isn't available in the file\n" ,search_id);
	}
	else
	{
		fpo = fopen("Police_Record","r");
		fpt = fopen("Temp_File","w");

			while(fread(&p,sizeof(p),1,fpo))
			{
				if(p.pid != search_id)
				{
					fwrite(&p,sizeof(p),1,fpt);
				}
				else
				{
					printf("\n\t1.Update name of Police ID %d" ,search_id);
					printf("\n\t2.Update Post of ID %d" ,search_id);
					printf("\n\t3.Update salary of Police ID %d" ,search_id);
					printf("\n\t4.Update City of Police ID %d" ,search_id);
					printf("\n\t5.Update Name,Post,Salary and City of Police ID %d" ,search_id);

					printf("\nEnter your choice=");
					scanf("%d" ,&ch);

					switch(ch)
					{

						case 1:
							printf("Enter new name:");
							scanf("%s" ,p.name);
							c=1;
							break;
						case 2:
							printf("Enter new post:");
							scanf("%s" ,p.position);
							c=1;
							break;
						case 3:
							printf("Enter new salary:");
							scanf("%f" ,&p.salary);
							c=1;
							break;
						case 4:
							printf("Enter new city:");
							scanf("%s" ,p.city);
							c=1;
							break;
						case 5:
							printf("Enter new name:");
							scanf("%s" ,p.name);

							printf("Enter new post:");
							scanf("%s" ,p.position);

							printf("Enter new salary:");
							scanf("%f" ,&p.salary);

							printf("Enter new city:");
							scanf("%s" ,p.city);
							c=1;
							break;

						default:
							printf("Invalid Selection");
							break;

					}

					fwrite(&p,sizeof(p),1,fpt);
				}
			}

		fclose(fpo);
		fclose(fpt);
	}

	fpo = fopen("Police_Record","w");
	fpt = fopen("Temp_File","r");

		while(fread(&p,sizeof(p),1,fpt))
		{
			fwrite(&p,sizeof(p),1,fpo);
		}

	fclose(fpo);
	fclose(fpt);
	if(c==1)
		printf("\nRECORD UPDATED\n");
}


//Function to delete record....
void delete(void)
{
	FILE *fpo,*fpt;

	int search_id;
	printf("Enter the Police ID you want to delete:");
	scanf("%d" ,&search_id);

	if(avlpid(search_id) == 0)
	{
		printf("%d isn't available in the file\n" ,search_id);
	}
	else
	{
		fpo = fopen("Police_Record","r");
		fpt = fopen("Temp_File","w");

			while(fread(&p,sizeof(p),1,fpo))
			{
				if(search_id != p.pid)
					fwrite(&p,sizeof(p),1,fpt);
			}

		fclose(fpo);
		fclose(fpt);

		fpo = fopen("Police_Record","w");
		fpt = fopen("Temp_File","r");

			while(fread(&p,sizeof(p),1,fpt))
			{
				fwrite(&p,sizeof(p),1,fpo);
			}
			printf("\nRECORD DELETED");

		fclose(fpo);
		fclose(fpt);
	}
}

//Sorting and displaying by using memory allocation (calloc)....
void sort(void)
{
	//int a[20],count=0,i,j,t,c;
	int size = get_no_record();
	struct police *ptr,temp;

	ptr = (struct police *) calloc(size,sizeof(struct police));

	FILE *fpo;

	fpo = fopen("Police_Record","r");

		for(int i=0;i<size;i++)
		{
			fread(ptr+i,sizeof(p),1,fpo);
		}

		for(int i=0;i<size-1;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if( ((ptr+i)->pid) > ((ptr+j)->pid))
				{
					temp = *(ptr+i);
					*(ptr+i) = *(ptr+j);
					*(ptr+j) = temp;
				}
			}
		}

printf("\nSort by ID\n\n");
		printf("\nPID\tName\tPosition\tSalary\tCity\n\n");

		for(int i=0;i<size;i++)
		{
			printf("%d\t%s\t%s\t%.2f\t%s\n" ,(ptr+i)->pid,(ptr+i)->name,(ptr+i)->position,(ptr+i)->salary,(ptr+i)->city);
		}

	fclose(fpo);

	fpo = fopen("Police_Record","r");

		for(int i=0;i<size;i++)
		{
			fread(ptr+i,sizeof(p),1,fpo);
		}

		for(int i=0;i<size-1;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if( ((ptr+i)->salary) < ((ptr+j)->salary))
				{
					temp = *(ptr+i);
					*(ptr+i) = *(ptr+j);
					*(ptr+j) = temp;
				}
			}
		}

printf("\nSort by salary\n\n");
		printf("\nPID\tName\tPosition\tSalary\tCity\n\n");

		for(int i=0;i<size;i++)
		{
			printf("%d\t%s\t%s\t%.2f\t%s\n" ,(ptr+i)->pid,(ptr+i)->name,(ptr+i)->position,(ptr+i)->salary,(ptr+i)->city);
		}

	fclose(fpo);

	free(ptr);
}

int main()
{
	setbuf(stdout,NULL);
 	int ch,emp;
 	do{
 		 printmenu();
		 printf("\nEnter your choice:");
		 scanf("%d",&ch);
		 printf("\n");

		 switch(ch)
		 {
		 	case 1:
		 		insert();
		 		break;
		 	case 2:
		 		emp = empty();
		 		if(emp == 0)
		 			printf("Your file is empty\n");
		 		else
				 	display();
		 		break;
		 	case 3:
		 		emp = empty();
		 		if(emp == 0)
		 			printf("Your file is empty\n");
		 		else
		 			search();
			 	break;
			case 4:
		 		emp = empty();
		 		if(emp == 0)
		 			printf("Your file is empty\n");
		 		else
		 			update();
				break;
			case 5:
		 		emp = empty();
		 		if(emp == 0)
		 			printf("Your file is empty\n");
		 		else
		 			delete();
				break;
			case 6:
		 		emp = empty();
		 		if(emp == 0)
		 			printf("Your file is empty\n");
		 		else
		 			sort();
				break;
			case 7:
				printf("Total %d Records Available in File\n" ,get_no_record());
				break;
			case 8:
				printf("Hoorey!!\nSuccessfully exited");
				exit(1);
				break;
			default:
				printf("\nEnter valid choice");
		 }

	 }while(ch != 8);

 	return 0;
}
