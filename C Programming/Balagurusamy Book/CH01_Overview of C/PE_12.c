/*  A Point on the circumference of a circle whose center is (0,0) is (4,5). Write a program
    to compute perimeter and area of the circle.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main()
{
    int x1, x2, y1, y2;
    float r,p,a;
    x1 = 0;
    x2 = 4;
    y1 = 0;
    y2 = 5;

    r = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    a = PI*r*r;
    p = 2*PI*r;

    printf("The Area of this circle is %f\n", a);
    printf("The Perimeter of this is %f\n", p);

    return 0;
}
