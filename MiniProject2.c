/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
MiniProject2.c
Program that simulates rolling dice. When the program runs, it will randomly choose a number between 1 and 6 (Or other integer you prefer). Print that number. Request user to roll again. Set the min and max number that dice can show. For the average die, that means a minimum of 1 and a maximum of 6.

Explaination Video Link: https://www.youtube.com/watch?v=obtw21Eat1o&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=13&pp=iAQB
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int genRandomNumber(int num){
//     return num * 78667 + 56467 - num * 67;
// }

int genRandomNumberInRange(int min, int max)
{
    srand(time(0));
    return min + (rand() % max);
}

int main()
{

    char ch;
    while (ch != 'q')
    {
        printf("%d\n", genRandomNumberInRange(1, 6));
        scanf("%c", &ch);
    }

    return 0;
}