#include<stdio.h>

int main()
{
    int bookid;
    char bookname[50];
    char author[30];

    printf("Enter Book ID: ");
    scanf("%d",&bookid);

    printf("Enter Book Name: ");
    scanf("%s",bookname);

    printf("Enter Author Name: ");
    scanf("%s",author);

    printf("\n----- LIBRARY RECORD -----\n");
    printf("Book ID     : %d\n",bookid);
    printf("Book Name   : %s\n",bookname);
    printf("Author Name : %s\n",author);

    return 0;
}