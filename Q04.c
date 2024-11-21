/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q04.c
In array do the following:
1. Find given element in array
2. Find Max and Min element
3. Find frequency of given element in array
4. Find Average of elements in Array.

Explaination Video Link: https://www.youtube.com/watch?v=PTL8rjAIgoo&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=7&pp=iAQB
*/

#include <stdio.h>
#include <stdbool.h>

void searchElement(int a[], int key, int size)
{
    // int size = sizeof(a)/sizeof(a[0]);
    bool notFound = true;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            printf("Element %i exists at index %i in the array.", key, i);
            notFound = false;
            break;
        }
    }
    if (notFound)
    {
        printf("Element %i does not exists in the array.", key);
    }
}

void findMax(int a[], int size)
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum value from the array is %i.\n", max);
}

void findMin(int a[], int size)
{
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Minimum value from the array is %i.\n", min);
}

void freq1(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int curEle = a[i];
        int cnt = 0;

        for (int j = 0; j < size; j++)
        {
            if (curEle == a[j])
            {
                cnt++;
            }
        }

        printf("Freq of %i is %i\n", curEle, cnt);
    }
}

void freq2(int a[], int size)
{
    int alreadyCountedArray[size];
    int idx = 0;

    for (int i = 0; i < size; i++)
    {
        int curEle = a[i];
        int cnt = 0;

        bool alreadyCounted = false;
        for (int j = 0; j < size; j++)
        {
            if (alreadyCountedArray[j] == curEle)
            {
                alreadyCounted = true;
                break;
            }
        }

        if (!alreadyCounted)
        {
            for (int j = 0; j < size; j++)
            {
                if (curEle == a[j])
                {
                    cnt++;
                }
            }

            alreadyCountedArray[idx] = curEle;
            idx++;

            printf("Freq of %i is %i\n", curEle, cnt);
        }
    }
}

void freq3(int a[], int size)
{
    int freqArray[100000] = {};
    for (int i = 0; i < size; i++)
    {
        int curEle = a[i];
        freqArray[curEle]++;
    }

    for (int i = 0; i < 100000; i++)
    {
        if (freqArray[i] != 0)
        {
            printf("Freq of %i is %i\n", i, freqArray[i]);
        }
    }
}

void findAvg(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i]; // sum += a[i];
    }
    float avg = (sum * 1.0) / size;
    printf("Average of the given array is %f with sum %i.\n", avg, sum);
}

int main()
{

    int n;
    printf("Enter size of the array: ");
    scanf("%i", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %i element: ", i);
        scanf("%i", &a[i]);
    }

    printf("Array provided is ");
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", a[i]);
    }
    printf("\n");

    int size = sizeof(a) / sizeof(a[0]);

    // int key;
    // printf("Enter the element you want to search: ");
    // scanf("%i", &key);
    // searchElement(a, key, size);

    // findMax(a, size);

    // findMin(a, size);

    // freq1(a, size);
    // freq2(a, size);
    // freq3(a, size);

    findAvg(a, size);

    // printf("%ld %ld %ld %ld\n", sizeof(5), sizeof(5.3), sizeof(true), sizeof('a'));

    return 0;
}