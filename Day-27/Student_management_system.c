#include<stdio.h>

int main()
{
    int roll;
    char name[30];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Marks: ");
    scanf("%f",&marks);

    printf("\n----- STUDENT RECORD -----\n");
    printf("Roll Number : %d\n",roll);
    printf("Name        : %s\n",name);
    printf("Marks       : %.2f\n",marks);

    if(marks>=40)
        printf("Result      : Pass");
    else
        printf("Result      : Fail");

    return 0;
}