#include<stdio.h>

int main()
{
    int secret, guess;

    printf("Player 1, enter the secret number: ");
    scanf("%d",&secret);

    printf("\nGuess the number:\n");

    do
    {
        scanf("%d",&guess);

        if(guess>secret)
            printf("Too High! Try Again: ");

        else if(guess<secret)
            printf("Too Low! Try Again: ");

        else
            printf("Congratulations! You guessed correctly.");

    }while(guess!=secret);

    return 0;
}