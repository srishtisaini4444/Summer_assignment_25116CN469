#include<stdio.h>

int main()
{
    int id[10], salary[10], n, i;
    char name[10][30];

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&id[i]);

        printf("Enter Employee Name: ");
        scanf("%s",name[i]);

        printf("Enter Salary: ");
        scanf("%d",&salary[i]);
    }

    printf("\n----- Employee Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee ID   : %d\n",id[i]);
        printf("Employee Name : %s\n",name[i]);
        printf("Salary        : %d\n",salary[i]);
    }

    return 0;
}