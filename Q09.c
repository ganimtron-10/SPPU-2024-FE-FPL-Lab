/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q09.c
Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary), and store the data and update the data in structure.

Explaination Video Link: https://www.youtube.com/watch?v=jI67KMMNlAI&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=10&pp=iAQB
*/

#include <stdio.h>
#include <string.h>

// struct StructName{
//     dtype varname1;
//     dtype varname1;
//     dtype varname1;
// };

struct Employee
{
    char name[100];
    char designation[100];
    char gender[100];
    char dateOfJoining[100];
    int salary;
};

void printEmployeeInfo(struct Employee emp)
{
    printf("------------------------------\n");
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Gender: %s\n", emp.gender);
    printf("DateOfJoining: %s\n", emp.dateOfJoining);
    printf("Salary: %d\n", emp.salary);
    printf("------------------------------\n");
}

int main()
{

    struct Employee e1 = {"Pranam", "Student", "Male", "20/02/2024", 0};
    // e1.name = "Pranam"; strcpy(e1.name, "Pranam");
    // e1.designation = "Student";
    // e1.gender =  "Male";
    // e1.dateOfJoining = "20/02/2024";
    // e1.salary = 0;

    printEmployeeInfo(e1);

    strcpy(e1.name, "Er. Pranam");
    strcpy(e1.designation, "Intern");
    strcpy(e1.gender, "Unspecified");
    strcpy(e1.dateOfJoining, "01/01/2024");
    e1.salary = 1000;

    printEmployeeInfo(e1);

    return 0;
}