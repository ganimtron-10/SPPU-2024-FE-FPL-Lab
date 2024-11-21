/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
MiniProject4.c
To calculate the salary of an employee given his basic pay (take as input from user). Calculate gross salary of employee. Let HRA be 10 % of basic pay and TA be 5% of basic pay. Let employees pay professional tax as 2% of total salary. Calculate net salary payable after deductions.

Explaination Video Link: https://www.youtube.com/watch?v=sYoJPH3mMzc&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=15&pp=iAQB
*/

#include <stdio.h>

int main()
{

    float basicPay;
    printf("Enter your Basic Pay: ");
    scanf("%f", &basicPay);

    float HRA = 0.1 * basicPay;
    float TA = (5 * 1.0) / 100 * basicPay;

    float grossSalary = basicPay + HRA + TA;

    float PT = 0.02 * basicPay;

    float netSalary = grossSalary - PT;

    // printf("Your Net Pay is %f.\n", netSalary);
    printf("Salary Breakdown:\n\tBase Pay: +%f\n\tHRA: +%f\n\tTA: +%f\n\t----------\n\tGross Pay: %f\n\tPT: -%f\n\t----------\n\tNet Pay: %f\n", basicPay, HRA, TA, grossSalary, PT, netSalary);

    return 0;
}