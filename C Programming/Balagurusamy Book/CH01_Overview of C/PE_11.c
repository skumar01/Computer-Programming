/*  Distance between two points (x1,y1) and (x2,y2) is governed by the formula
                D^2 = (x2-x1)^2 + (y2-y1)^2
    Write a program to compute D given the coordinates of the points.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x1, x2, y1, y2, D;

    x1 = 2.0;
    x2 = 6.0;
    y1 = 5.0;
    y2 = 8.0;

    D = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("Distance is %f",D);

    return 0;
}
