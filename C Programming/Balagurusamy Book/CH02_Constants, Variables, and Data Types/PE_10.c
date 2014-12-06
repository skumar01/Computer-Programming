/*  Write a program to illustrate the use of symbolic constants in a real-life
    application.
*/

#include<stdio.h>
#define PI 3.1415

int main()
{
    float r, a;

    printf("Enter the redius of Circle : ");
    scanf("%f", &r);

    a = PI * r * r;

    printf("\nThe area of given circle is = %f\n", a);

    return 0;
}
