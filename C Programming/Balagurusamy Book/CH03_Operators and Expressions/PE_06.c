/*  The straight-line method of the yearly depreciation of the value of an item is given by
        Depreciation = (Purchase Price - Salvage Value)/Years of Service
    Write a program to determine the salvage value of an item when the purchase price
    years of service, and the annual depreciation are given.
*/

#include<stdio.h>

int main()
{
    float Dep, PP, Salv, year;
    printf("Enter the Purchase Pricee : ");
    scanf("%f", &PP);
    printf("Enter the Depreciation : ");
    scanf("%f", &Dep);
    printf("Enter the value of 'Years of Service' : ");
    scanf("%f", &year);
    Salv = PP - (Dep * year);

    printf("Salvage Value is  = %.2f\n", Salv);

    return 0;
}
