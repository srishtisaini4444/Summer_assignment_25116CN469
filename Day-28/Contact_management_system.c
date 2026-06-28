#include<stdio.h>

int main()
{
    char name[30];
    long long mobile;

    printf("Enter Contact Name: ");
    scanf("%s",name);

    printf("Enter Mobile Number: ");
    scanf("%lld",&mobile);

    printf("\n----- CONTACT DETAILS -----\n");
    printf("Name          : %s\n",name);
    printf("Mobile Number : %lld\n",mobile);

    return 0;
}