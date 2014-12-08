/*  The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over
    and above 100 calls. Write a program to read customer codes and calls made and print the
    bill for each customer.
*/

#include<stdio.h>

int main()
{
    int call;
    float cost, bill;

    cost = 250;
    bill = 1.25;

    printf("Enter the numbers of call : ");
    scanf("%d", &call);

    if(call <= 100)
    {
        printf("Total bill amount is = %.2f\n", cost);
    }
    else
    {
        bill = bill * (call - 100);
        cost = cost + bill;
        printf("Total bill amount is = %.2f\n", cost);
    }

    return 0;
}
