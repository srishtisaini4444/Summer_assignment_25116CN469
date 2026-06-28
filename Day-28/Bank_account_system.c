#include<stdio.h>

int main()
{
    int accno;
    char name[30];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d",&accno);

    printf("Enter Account Holder Name: ");
    scanf("%s",name);

    printf("Enter Balance: ");
    scanf("%f",&balance);

    printf("\n----- ACCOUNT DETAILS -----\n");
    printf("Account Number : %d\n",accno);
    printf("Account Holder : %s\n",name);
    printf("Balance        : %.2f\n",balance);

    return 0;
}