/*  The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a
    program to get these values from the user and display the prices as follows:
    ***LIST OF ITEMS***
    Item        Price
    Rice        Rs. 16.75
    Sugar       Rs. 15.00
*/

#include<stdio.h>

int main()
{
    float rice, sugar;

    printf("Enter the price of Rice = ");
    scanf("%f", &rice);

    printf("Enter the price of sugar = ");
    scanf("%f", &sugar);

    printf("\n\n*****LIST OF ITEMS*****\n");
    printf("Itesm \t\tPrice\n");
    printf("Rice \t\tRs. %.2f\n", rice);
    printf("Sugar \t\tRs. %.2f\n", sugar);

    return 0;
}
