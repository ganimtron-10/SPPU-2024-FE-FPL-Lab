// Write a C program that accepts a string from the user and performs the following string
// operations- i. Calculate length of string ii. String reversal iii. Equality check of two
// Strings iii. Check palindrome ii. Check substring

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int string_size(char s[])
{

    int i = 1;
    char cur = s[0];
    int cnt = 0;

    while (cur != '\0')
    {
        cur = s[i];
        cnt++;
        i++;
    }

    return cnt;
}

void string_reverse(char c[], char revc[])
{
    int size = string_size(c);
    revc[size] = '\0';

    for (int i = 0; i < size; i++)
    {
        revc[i] = c[size - 1 - i];
    }
}

int string_compare(char str1[], char str2[])
{
    int str1_size = string_size(str1);
    int str2_size = string_size(str2);

    if (str1_size != str2_size)
    {
        return -1;
    }

    for (int i = 0; i < str1_size; i++)
    {
        if (str1[i] != str2[i])
            return -1;
    }

    return 0;
}

int string_substring(char str1[], char str2[])
{
    int str1_size = string_size(str1);
    int str2_size = string_size(str2);

    for (int i = 0; i < str1_size - str2_size; i++)
    {
        bool isSubstring = true;
        int curi = i;
        for (int j = 0; j < str2_size; j++, curi++)
        {
            // printf("%c = %c\n", str1[curi], str2[j]);
            if (str1[curi] != str2[j])
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

void printCharArray(char c[])
{

    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
}

int main()
{

    char str1[] = "Aledutron";
    printf("Size of the string %s is %i.\n", str1, string_size(str1));
    printf("Size of the string %s is %li.\n", str1, strlen(str1));

    char revstr[string_size(str1) + 1];
    string_reverse(str1, revstr);
    printf("Reversed string of %s is %s.\n", str1, revstr);
    strcpy(revstr, str1);
    strrev(revstr);
    printf("Reversed string of %s is %s.\n", str1, revstr);

    printf("%d\n", strcmp(str1, str1));
    printf("%d", string_compare(str1, str1));

    printf("%s %s\n", strstr(str1, "x"), strstr(str1, "x") != NULL ? "is substr" : "not substr");
    printf("%d", string_substring(str1, "edu"));

    return 0;
}