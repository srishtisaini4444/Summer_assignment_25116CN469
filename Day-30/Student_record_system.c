#include<stdio.h>

int main()
{
    int roll[10], marks[10], n, i;
    char name[10][30];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll Number : %d\n",roll[i]);
        printf("Name        : %s\n",name[i]);
        printf("Marks       : %d\n",marks[i]);
    }

    return 0;
}