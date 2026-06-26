#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("Simple Quiz\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 3)
    {
        score++;
    }

    printf("\nQ3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Score = %d out of 3\n", score);

    return 0;
}