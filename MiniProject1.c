/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
MiniProject1.c
Calculator with basic functions. Add more functionality such as graphic user interface and Complex calculations.

Explaination Video Link: https://www.youtube.com/watch?v=ZgQBWUpGpdI&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=12&pp=iAQB
*/

#include <stdio.h>

int main()
{

    printf("---------------\n");
    printf("   Calculator  \n");
    printf("---------------\n");

    while (1)
    {
        char operator;
        printf("Enter Operation you want to perform (Supported -> + - * / %% q): ");
        scanf("%c", &operator);

        if (operator== 'q')
        {
            printf("Bye Bye, See you again!\n");
            break;
        }

        float a, b;
        printf("Enter Two Operands (Space Seperated): ");
        scanf("%f %f", &a, &b);

        switch (operator)
        {
        case '+':
            printf("%f %c %f = %f\n", a, operator, b, a + b);
            break;
        case '-':
            printf("%f %c %f = %f\n", a, operator, b, a - b);
            break;
        case '*':
            printf("%f %c %f = %f\n", a, operator, b, a * b);
            break;
        case '/':
            printf("%f %c %f = %f\n", a, operator, b, a / b);
            break;
        case '%':
            printf("%d %c %d = %d\n", (int)a, operator,(int) b, (int)a % (int)b);
            break;
        // case '^':
        //     printf("%f %c %f = %f",a,operator,b,);
        //     break;
        default:
            printf("Unable to understand the Operator %c. Please Retry!\n", operator);
        }
        getchar();
    }

    return 0;
}