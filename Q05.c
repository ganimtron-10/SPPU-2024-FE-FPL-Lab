/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q05.c
Write a C program for employee salary calculation given, Basic, H.R.A. 20 % of Basic and D.A. 150 % of Basic.

Explaination Video Link: https://www.youtube.com/watch?v=rPbegeSw7pk&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=3&pp=iAQB
*/

#include <stdio.h>

int main()
{

    int basicPay;
    printf("Enter your Basic Salary: ");
    scanf("%d", &basicPay);

    int hra = 0.2 * basicPay;
    int da = 1.5 * basicPay;

    int totalSalary = basicPay + hra + da;
    printf("Your Total Salary is INR %d", totalSalary);

    return 0;
}