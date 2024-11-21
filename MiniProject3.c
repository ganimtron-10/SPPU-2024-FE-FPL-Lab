/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
MiniProject3.c
Guess Number: Randomly generate a number unknown to the user. The user needs to guess what that number is. If the user’s guess is wrong, the program should return some sort of indication as to how wrong (e.g. the number is too high or too low). If the user guesses correctly, a positive indication should appear. Write functions to check if the user input is an actual number, to see the difference between the inputted number and the randomly generated numbers, and to then compare the numbers.

Explaination Video Link: https://www.youtube.com/watch?v=4MF9F_pnDsg&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=14&pp=iAQB
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max)
{
    srand(time(0));
    return min + (rand() % max);
}

int main()
{

    printf("---------------------------------\n");
    printf("Welcome to Guess Game!\n");
    printf("---------------------------------\n");

    int min, max;
    printf("Enter Minimum Value: ");
    scanf("%d", &min);
    printf("Enter Maximum Value: ");
    scanf("%d", &max);

    int randomGuessNumber = generateRandomNumber(min, max);
    int userGuess;

    while (1)
    {
        printf("\nEnter your Guess: ");
        scanf("%d", &userGuess);

        if (userGuess == randomGuessNumber)
        {
            printf("Congrats, You Guess the number correctly!\n");
            break;
        }
        else if (userGuess < randomGuessNumber)
        {
            printf("Your guess is lower than actual value.");
        }
        else
        {
            printf("Your guess is greater than actual value.");
        }
    }

    return 0;
}