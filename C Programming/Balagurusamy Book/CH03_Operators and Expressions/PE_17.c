/*  Write a program to print a table of "sin" and "cos" functions for the interval from
    0 to 180 degrees in incrementals of 15 as shown below.
    -----------------------------------------------------------------------
        x(degrees)              sin(x)                  cos(x)
            0                   -----                   -----
            15                  -----                   -----
            --                  -----                   -----
            180                 -----                   -----
    -----------------------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int deg;
    float s, c;

    printf("---------------------------------------------------------------------\n");
    printf("   x(degrees)\t\t\tsin(x)\t\t\tcos(x)\n");

    for(deg = 0; deg <= 180; deg = deg+15)
    {
        s = sin(deg);
        c = cos(deg);
        printf("\t%d\t\t\t%.2f\t\t\t%.2f\n", deg, s, c);
    }

    printf("---------------------------------------------------------------------\n");

    return 0;
}
