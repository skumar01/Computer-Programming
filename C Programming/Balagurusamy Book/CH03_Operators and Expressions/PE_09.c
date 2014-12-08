/*  In inventory management, the Economic Order Quantity for a single item is given by
            EOQ = sqrt((2 * demand rate * setup cost)/holding cost per item per unit time)
    and the optimal Time Between Orders
            TBO = sqrt((2 * setup costs)/(demand rate * holding cost per item per unit time))

    Write a program to continue EOQ and TBO, given demand rate (items per unit time), setup
    cost (per order), and the holding cost (per item per unit time).
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float EOQ, TBO, dr, sc, hc;

    printf("Enter the Demand rate : ");
    scanf("%f", &dr);
    printf("Enter the Setup Cost : ");
    scanf("%f", &sc);
    printf("Enter the Holding cost per item per unit time : ");
    scanf("%f", &hc);

    EOQ = sqrt((2 * dr * sc)/hc);
    TBO = sqrt((2 * sc)/(dr * hc));

    printf("Economic Order Quantity = %.2f\n", EOQ);
    printf("Time Between Order = %.2f\n", TBO);

    return 0;

}
