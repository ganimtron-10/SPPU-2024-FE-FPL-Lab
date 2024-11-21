/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q06.c
To accept a student's marks for five subjects, compute his/her result. Student is passing if he/she scores marks equal to and above 40 in each course. If student scores aggregate greater than 75%, then the grade is distinguished. If aggregate is 60>= and <75 then theGrade of first division. If aggregate is 50>= and <60, then the grade is second division. If aggregate is 40>= and <50, then the grade is third division.

Explaination Video Link: https://www.youtube.com/watch?v=3J0YnDtz8ks&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=7&pp=iAQB
*/

/*

string => char[] => 'abc'

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char subjects[][20] = {"English", "Maths", "Science", "Social Studies", "EVS"};
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks for %s subject: ", subjects[i]);
        scanf("%i", &marks[i]);
    }

    // for(int i = 0; i < 5; i++){
    //     printf("You entered %i Marks for %s subject.\n", marks[i], subjects[i]);
    // }

    bool isPass = true;
    for (int i = 0; i < 5; i++)
    {
        // sum = sum + marks[i];
        if (marks[i] < 40)
        {
            isPass = false;
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i]; // sum = sum + marks[i];
    }

    float percentage = sum / 5.0;
    printf("You received %.2f percentage.\n", percentage);

    char grade[20];

    if (isPass)
    {
        // Grade

        if (percentage >= 75)
        {
            strcpy(grade, "Distinction");
        }
        else if (percentage >= 60 && percentage < 75)
        {
            strcpy(grade, "First Division");
        }
        else if (percentage >= 50 && percentage < 60)
        {
            strcpy(grade, "Second Division");
        }
        else if (percentage >= 40)
        {
            strcpy(grade, "Third Division");
        }
        else
        {
            strcpy(grade, "Fail");
        }

        printf("You Passed with %s Grade.\n", grade);
    }
    else
    {
        printf("You failed! Passing Criteria: You need 40 or above in each subject.\n");
    }

    return 0;
}