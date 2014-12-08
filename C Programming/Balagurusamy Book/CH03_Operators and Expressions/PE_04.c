/*  Write a program that will obtain the length and width of a rectangle from the the
    user and compute its area and perimeter.
*/

#include<stdio.h>

int main()
{
    float l, w, a, p;
    printf("Enter the length of Rectangle : ");
    scanf("%f", &l);
    printf("Enter the width of Rectangle : ");
    scanf("%f", &w);
    a = l * w;
    p = 2 * (l + w);
    printf("Area of Rectangel is = %.2f and Perimeter is = %.2f\n\n", a, p);

    return 0;
}
