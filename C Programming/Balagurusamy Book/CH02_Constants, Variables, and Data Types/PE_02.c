/*  Write a program to read the price of an item in decimal form (like 15.95) and print
    the output in paise (like 1595 paise).
*/

#include<stdio.h>

int main()
{
    int paise;
    float price;

    printf("Please Enter the price : ");
    scanf("%f", &price);

    paise = price * 100;

    printf("\n%.2f Price is equivalent to %d Paise\n", price, paise);

    return 0;
}
