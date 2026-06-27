#include<stdio.h>

int main()
{
    char name[30];
    float m1,m2,m3,m4,m5,total,percentage;

    printf("Enter Student Name: ");
    scanf("%s",name);

    printf("Enter Marks of 5 Subjects:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;
    percentage = total/5;

    printf("\n----- MARKSHEET -----\n");
    printf("Student Name : %s\n",name);
    printf("Total Marks  : %.2f\n",total);
    printf("Percentage   : %.2f\n",percentage);

    if(percentage>=90)
        printf("Grade : A");

    else if(percentage>=75)
        printf("Grade : B");

    else if(percentage>=60)
        printf("Grade : C");

    else if(percentage>=40)
        printf("Grade : D");

    else
        printf("Grade : Fail");

    return 0;
}