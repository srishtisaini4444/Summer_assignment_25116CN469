#include<stdio.h>

int main()
{
    char name[30];
    int age;
    int tickets;

    printf("Enter Passenger Name: ");
    scanf("%s",name);

    printf("Enter Age: ");
    scanf("%d",&age);

    printf("Enter Number of Tickets: ");
    scanf("%d",&tickets);

    printf("\n----- TICKET DETAILS -----\n");
    printf("Passenger Name   : %s\n",name);
    printf("Age              : %d\n",age);
    printf("Tickets Booked   : %d\n",tickets);

    return 0;
}