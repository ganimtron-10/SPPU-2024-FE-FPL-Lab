/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q07.c
To accept two numbers from user and compute smallest divisor and Greatest Common Divisor of these two numbers.

Explaination Video Link: https://www.youtube.com/watch?v=3M1KqLFl6CM&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=4&pp=iAQB
*/

#include<stdio.h>

int min(int a, int b){
    if(a > b){
        return b;
    }else{
        return a;
    }
}

int lcm(int a, int b){
    for(int i = 2; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
    return 1;
}

int gcd(int a, int b){
    for(int i = min(a,b); i >= 1; i--){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
}

int main(){

    int a, b;
    printf("Enter two number (space seperated): ");
    scanf("%i %i",&a, &b);

    printf("LCM of %i and %i is %i.\n", a, b, lcm(a,b));
    printf("GCD of %i and %i is %i.\n", a, b, gcd(a,b));

    return 0;
}