/* Given the radius of a circle, write a program to compute and display its area. Use a symbolic
constant to define the "pi" value and assume a suitable value for radius.
*/


#include<stdio.h>
#define PI 3.1416

int main()
{
    float r, area;

    r = 5.0;

    area = PI*r*r;

    printf("Redius of circle is %f \n", r);
    printf("Area of circle is %f \n", area);
    return 0;
}
