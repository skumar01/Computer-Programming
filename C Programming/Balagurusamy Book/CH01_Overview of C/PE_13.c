/*  The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is
    the diameter of the circle. Write a program to compute the area of the circle.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main()
{
    int x1, x2, y1, y2;
    float a, d, r;

    x1 = 2;
    x2 = 5;
    y1 = 2;
    y2 = 6;

    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    r = d/2;
    a = PI*r*r;

    printf("The area of this circle is %f\n",a);

    return 0;
}
