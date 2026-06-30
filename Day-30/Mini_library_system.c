#include<stdio.h>

int main()
{
    char book[10][30];
    int n,i;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Book %d Name: ",i+1);
        scanf("%s",book[i]);
    }

    printf("\n----- Library Books -----\n");

    for(i=0;i<n;i++)
    {
        printf("%d. %s\n",i+1,book[i]);
    }

    return 0;
}