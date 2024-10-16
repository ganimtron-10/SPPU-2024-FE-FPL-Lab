/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q01.c
To accept the number and Compute
a) square root of number, 
b) Square of number, 
c) Cube of number 
d) check for prime, 
e) factorial of number 
f) prime factors.

Explaination Video Link: https://www.youtube.com/watch?v=rpDU2Et1ByE&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=5&pp=iAQB
*/


#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checkPrime(int num){
    bool isPrime = true;
    for(int i = 2; i < num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

/*

n! = n * (n-1)!
5! = 5 * 4 * 3 * 2 * 1 = 120

*/

long long fact(int n){

    if(n == 1 || n == 0) {
        return 1;
    }

    return n * 1LL * fact(n-1);
}

void findPrimeFactor(int num){
    printf("Prime factor for %i is", num);
    for(int i = 2; i <= num; i++ ){
        if(num%i == 0 && checkPrime(i)){
            printf(", %i", i);
        }
    }
    printf(".\n");
}

int main(){

    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    // printf("Square of the number %.2f is %.2f.\n",num, num * num );
    // printf("Cube of the number %.2f is %.2f.\n",num, num * num * num);

    // for(float i = 1; i < num; i = i + 0.01){
    //     if(i*i >= num){
    //         printf("Approximate Square root of the number %.2f is %.2f.\n", num, i);
    //         break;
    //     }
    // }

    printf("Square root of the number %.2f is %.2f.\n", num, sqrt(num));
    printf("Square of the number %.2f is %.2f.\n",num, pow(num, 2));
    printf("Cube of the number %.2f is %.2f.\n",num, pow(num, 3));

    int intNum = (int)num;

    // if(checkPrime((int)num)){
    //     printf("%i is a prime number.\n", (int)num);
    // }else{
    //     printf("%i is not a prime number.\n", (int)num);
    // }

    // cond ? true exec: false exec

    printf("%i is %sa prime number.\n", (int)num, checkPrime((int)num) ? "" : "not ");

    printf("Factorial of %i is %lli.\n",intNum, fact(intNum));

    findPrimeFactor(intNum);

    return 0;
}