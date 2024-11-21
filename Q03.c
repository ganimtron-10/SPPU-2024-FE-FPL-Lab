/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q03.c
To accept an object mass in kilograms and velocity in meters per second and display itsMomentum. Momentum is calculated as e=mc2 where m is the mass of the object and c is its velocity.

Explaination Video Link: https://www.youtube.com/watch?v=CZFSSLdBKGE&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=2&pp=iAQB
*/

#include <stdio.h>

int main()
{

    float mass, velocity;

    printf("Enter Object's Mass (kg): ");
    scanf("%f", &mass);

    printf("Enter Object's Velocity (m/s): ");
    scanf("%f", &velocity);

    float momentum = mass * velocity * velocity;
    printf("Momentum for object with mass %.2f kg and velocity %.2f m/s is %.2f kgm/s.\n", mass, velocity, momentum);

    return 0;
}