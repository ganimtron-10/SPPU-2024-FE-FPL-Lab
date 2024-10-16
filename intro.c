/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Intro cum Crash Course of C Programming

Explaination Video Link: https://www.youtube.com/watch?v=yb-X5pIVv_U&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=1&pp=iAQB
*/

#include <stdio.h>

void printHello(char c)
{
    printf("Hello %c!\n", c);
}

struct Point
{
    int x;
    int y;
};

int main()
{
    int a = 2;
    int b = 2;
    // printf("%d\n",a);
    // printf("%d %i %d %d\n", a+b, a-b, a*b, a/b);
    // printf("%d", a%b);

    // int a;
    // printf("Enter a value: ");
    // scanf("%d", &a);
    // printf("You entered %d.", a);

    // if(a > 5){
    //     printf("Greater than 5");
    // }else if(a == 5){
    //     printf("Equal to 5");
    // }else{
    //     printf("Less than 5");
    // }

    // for(int i = 0; i <= 5; i++){
    //     printf("%d\n", i);
    // }

    // int i = 0;
    // while(i < 5){
    //     printf("%d\n", i);
    //     i++;
    // }

    // printHello('P');

    struct Point p1;
    p1.x = 0;
    p1.y = 4;

    printf("Point has x coord as %d and y coord as %d\n", p1.x, p1.y);

    struct Point p2 = {8, 9};
    printf("Point has x coord as %d and y coord as %d\n", p2.x, p2.y);

    return 0;
}

/*

int -> 89, 0 -7
float -> 3.14, -67.3, 4.5867683
double -> 4.58676834
char -> a b % $ @
bool -> true, false


    3
   ___
2 | 7
   -6
   ___
   1


*/