/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q08.c
Write a C program that accepts a string from the user and performs the following string operations
i. Calculate length of string
ii. String reversal
iii. Equality check of twoStrings
iv. Check palindrome
v. Check substring

Explaination Video Link: https://www.youtube.com/watch?v=dxhN5K2DKhk&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=9&pp=iAQB
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int stringSize(char string[])
{
    int cnt = 0;
    int i = 0;
    char curc = string[i];

    while (curc != '\0')
    {
        cnt++;
        i++;
        curc = string[i];
    }

    return cnt;
}

void stringReverse(char string[], char reversedString[])
{
    int str1Size = stringSize(string);

    reversedString[str1Size] = '\0';

    for (int i = 0; i < str1Size; i++)
    {
        reversedString[i] = string[str1Size - 1 - i];
    }
}

bool stringEqual(char str1[], char str2[])
{
    int str1Size = stringSize(str1);
    int str2Size = stringSize(str2);

    if (str1Size != str2Size)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < str1Size; i++)
        {
            if (str1[i] != str2[i])
            {
                return false;
            }
        }
    }
    return true;
}

bool checkPalindrome(char str[])
{
    // str == revstr
    // racecar -> racecar
    // malayalam -> malayalam
    char revstr[stringSize(str) + 1];
    stringReverse(str, revstr);
    return stringEqual(str, revstr);
}

bool checkPalindrome2(char str[])
{
    int strSize = stringSize(str);
    for (int i = 0; i < strSize; i++)
    {
        if (str[i] != str[strSize - 1 - i])
        {
            return false;
        }
    }

    return true;
}

bool checkSubstring(char str1[], char str2[])
{
    int str1Size = stringSize(str1);
    int str2Size = stringSize(str2);

    if (str2Size > str1Size)
    {
        return false;
    }

    for (int i = 0; i <= str1Size - str2Size; i++)
    {
        int curi = i;
        bool isSubstring = true;
        for (int j = 0; j < str2Size; j++)
        {
            if (str1[curi + j] != str2[j])
            {
                isSubstring = false;
                break;
            }
        }

        if (isSubstring)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    char str1[] = "Hi, I am Aledutron. Enjoy the Video!";

    // for(int i = 0; i < 10; i++){
    //     printf("%c ", str1[i]);
    // }

    // printf("%s ", str1);

    printf("The string %s is of length %i.\n", str1, stringSize(str1));
    printf("The string %s is of length %li.\n", str1, strlen(str1));

    int str1Size = stringSize(str1);
    char reverseStr1[str1Size + 1];
    stringReverse(str1, reverseStr1);
    printf("The reversed string for \"%s\" is \"%s\".\n", str1, reverseStr1);

    // char reverseStr1IBF[str1Size+1];
    // strcpy(reverseStr1IBF, str1);
    // strrev(reverseStr1IBF);
    // printf("The reversed string for \"%s\" is \"%s\".\n", str1, reverseStr1IBF);

    printf("String \"%s\" and \"%s\" is %ssame.\n", str1, reverseStr1, stringEqual(str1, reverseStr1) ? "" : "not ");
    printf("String \"%s\" and \"%s\" is %ssame.\n", str1, str1, strcmp(str1, str1) == 0 ? "" : "not ");

    char palindromeString[] = "racecar";
    printf("String \"%s\" is %sa palindrome.\n", palindromeString, checkPalindrome2(palindromeString) ? "" : "not ");

    char substring[] = "Al";
    // if(checkSubstring(str1, substring)){
    //     printf("Yes! String \"%s\" is a substring of \"%s\".\n", substring, str1);
    // }else{
    //     printf("No! String \"%s\" is not a substring of \"%s\".\n", substring, str1);
    // }

    printf("String \"%s\" is %sa substring of \"%s\".\n", substring, checkSubstring(str1, substring) ? "" : "not ", str1);

    if (strstr(str1, substring) != NULL)
    {
        printf("Yes! String \"%s\" is a substring of \"%s\".\n", substring, str1);
    }
    else
    {
        printf("No! String \"%s\" is not a substring of \"%s\".\n", substring, str1);
    }

    return 0;
}