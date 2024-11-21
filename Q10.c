/*
Aledutron
SPPU 2024 FE FPL Lab
SPPU First Year (FE) Fundamentals Of Programming Language (FPL) Lab Assignments (2024 Pattern)
Youtube FPL Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L

Problem Statement:
Q10.c
Create class STORE to keep track of Products (Product Code, Name and price). Display menu of all products to users. Generate bills as per order.

Explaination Video Link: https://www.youtube.com/watch?v=HSOyaYI8obo&list=PLlShVH4JA0ouBb_iMZPPNOcfyX2JtPQ5L&index=11&pp=iAQB
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int code;
    char name[100];
    float price;
} Product;

typedef struct
{
    int productIndex;
    Product allProducts[100];
} Store;

Store s;

void AddProduct(int code, char name[], float price)
{
    Product cp;
    cp.code = code;
    cp.price = price;
    strcpy(cp.name, name);

    s.allProducts[s.productIndex] = cp;
    s.productIndex++;
}

void displayMenu()
{
    printf("-------------------------------\n");
    printf("%-10s%s%-10s\n", "", "Menu", "");
    printf("-------------------------------\n");
    printf("%-10s %-10s %-10s\n", "Code", "Name", "Price");
    printf("-------------------------------\n");

    for (int i = 0; i < s.productIndex; i++)
    {
        Product cp = s.allProducts[i];
        printf("%-10d %-10s %-10f\n", cp.code, cp.name, cp.price);
    }

    printf("-------------------------------\n");
}

void generateBill(int orders[], int orderSize)
{
    printf("-------------------------------\n");
    printf("%-10s%s%-10s\n", "", "Bill", "");
    printf("-------------------------------\n");
    printf("%-10s %-10s %-10s\n", "Code", "Name", "Price");
    printf("-------------------------------\n");

    float totalValue = 0;

    for (int i = 0; i < orderSize; i++)
    {
        int curOrderProductCode = orders[i];
        Product curProduct;
        for (int j = 0; j < s.productIndex; j++)
        {
            if (s.allProducts[j].code == curOrderProductCode)
            {
                curProduct = s.allProducts[j];
            }
        }
        printf("%-10d %-10s %-10f\n", curProduct.code, curProduct.name, curProduct.price);
        totalValue += curProduct.price;
    }

    printf("-------------------------------\n");
    printf("Total Value: %f\n", totalValue);
    printf("-------------------------------\n");
}

int main()
{

    s.productIndex = 0;

    AddProduct(1, "P1", 83);
    AddProduct(2, "P2", 32.6);
    AddProduct(3, "P3", 89.56);
    AddProduct(5, "P5", 99.99);

    displayMenu();

    int orders[] = {1, 3, 5};

    generateBill(orders, (sizeof(orders) / sizeof(orders[0])));

    return 0;
}