/*
 * q4.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */


#include <stdio.h>
#include <string.h>
struct Book {
	int accession;
    char title[50];
    char author[30];
    float price;
    int flag;
};
struct Library {
    struct Book books[50];
    int num_books;
};

int main()
{
    struct Library library;
    library.num_books = 0;

    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1) Add book details\n");
        printf("2) Display book details\n");
        printf("3) List all books of given author\n");
        printf("4) List the title of specified book\n");
        printf("5) Total No. of books in the library\n");
        printf("6) List the books in the order of accession number\n");
        printf("7) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                if (library.num_books < 100)
                {
                	printf("Book accession number:");
                	scanf("%d" ,&library.books[library.num_books].accession);

                    printf("Enter book title: ");
                    scanf(" %s", library.books[library.num_books].title);

                    printf("Enter author's name: ");
                    scanf(" %s", library.books[library.num_books].author);

                    printf("Price: ");
                    scanf("%f",&library.books[library.num_books].price);

                    printf("Is issued(1)/not issued: ");
                    scanf("%d", &library.books[library.num_books].flag);

                    library.num_books++;
                    printf("Book added successfully!\n");
                }
                else
                    printf("Library is full. Cannot add more books.\n");
                break;
            }
            case 2:
            {
                printf("\nLibrary Books:\n");
                for (int i = 0; i < library.num_books; i++)
                {
                	printf("Accession No.: %d\n", library.books[i].accession);
                    printf("Title: %s\n", library.books[i].title);
                    printf("Author: %s\n", library.books[i].author);
                    printf("Price: %.2f",library.books[i].price);
                    if(library.books[i].flag==1)
                    	printf("\n issued");
                    else
                        printf("\n not issued");
                    printf("\n\n");
                }
                break;
            }
            case 3:
            {
                    char search_author[50];
                    printf("Enter author's name: ");
                    scanf("%s", search_author);

                    printf("\nBooks by %s:\n", search_author);
                    int found = 0;
                    for (int i = 0; i < library.num_books; i++)
                    {
                        if (strcmp(library.books[i].author, search_author) == 0)
                        {
                        	printf("Accession No.: %d\n", library.books[i].accession);
                        	printf("Title: %s\n", library.books[i].title);
                        	printf("Price: %.2f",library.books[i].price);
                        	if(library.books[i].flag==1)
                        		printf("\n issued");
                        	else
                        		printf("\n not issued");
                           printf("\n\n");
                           found = 1;
                        }
                    }

                    if (found==0)
                        printf("No books found for author %s.\n",search_author);
                break;
            }
            case 4:
            {
            	char search_book[50];
                printf("Enter book name:\n");
                scanf("%s",search_book);

                printf("\nBooks by %s:\n", search_book);
                int found = 0;
                for (int i = 0; i < library.num_books; i++)
                {
                	if(strcmp(library.books[i].title, search_book) == 0)
                	{
                		printf("Accession No.: %d\n", library.books[i].accession);
                	    printf("Title: %s\n", library.books[i].title);
                	    printf("Price: %.2f",library.books[i].price);
                	    if(library.books[i].flag==1)
                	        printf("\n issued");
                	    else
                	    	printf("\n not issued");
                	    printf("\n\n");
                	     found = 1;
                	}
                }
                	if (found==0)
                		printf("No books found for title %s.\n",search_book);
                break;
            }
            case 5:
            {
                printf("Total books in the library: %d\n", library.num_books);
                break;
            }
            case 6:
            {
            	struct Book temp;
            		int i,j;

            		for(i=0;i< library.num_books;i++)
            		{
            			for(j=i+1;j< library.num_books;j++)
            			{
            				if(library.books[i].accession > library.books[j].accession)
            				{
            					temp=library.books[i];
            					library.books[i]=library.books[j];
            					library.books[j]=temp;
            				}
            			}
            		}
            	int found = 0;
            	printf("\nLibrary Books:\n");
            	for (int i = 0; i < library.num_books; i++)
            	{
            		printf("Accession No.: %d\n", library.books[i].accession);
            	    printf("Title: %s\n", library.books[i].title);
            	    found = 1;
            	}
            	if (found==0)
            		printf("No books found\n");
                  break;
            }
            case 7:
            {
                printf("Exiting program\n");
                break;
            }
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    }
    while (choice != 7);

    return 0;
}

