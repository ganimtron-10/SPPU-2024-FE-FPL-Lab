/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q02.c
To accept from user the number of Fibonacci numbers to be generated and print the Fibonacci series.

Explaination Video Link: https://www.youtube.com/watch?v=uQKXGEhtRy4&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=6&pp=iAQB
*/

#include<stdio.h>

int fibo(int n){

    if(n <= 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    int returnValue = fibo(n-1) + fibo(n-2);
    // printf("%i ,", returnValue);
    return returnValue;
}

void printFibo(int n){
    if(n < 0){
        printf("Can't print %i Fibonacci Numbers.\n", n);
        return;
    }
    printf("%i Fibonacci Numbers are: ", n);
    
    long long first = 0, second = 1;
    if(n == 1) {
        printf("%lli", first);
    }else{
        printf("%lli, %lli", first, second);
        for(int i = 0; i <= n-2; i++){
            long long next = first + second;
            printf(", %lli", next);
            first = second;
            second = next;
        }
    }
    printf(".\n");
}

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    // printf("Fibonacci Number at %i position is %i.\n", num, fibo(num));
    printFibo(num);

    return 0;
}