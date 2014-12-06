/*  Write a program to read two floating point numbers using a scanf statement, assign
    there sum to an integer variable and then output the values of all the three variables.
*/

#include<stdio.h>

int main()
{
    float a, b;
    int c;

    printf("Enter two floating point number : \n");
    scanf("%f", &a);
    scanf("%f", &b);

    c = a + b;

    printf("First Floating point number is = %g\n", a);
    printf("Second Floating point number is = %g\n", b);
    printf("The Integer sum of these two floating point number is = %f\n\n",c);

    return 0;
}
