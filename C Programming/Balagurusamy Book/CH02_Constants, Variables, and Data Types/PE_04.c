/*  Write a program that requests two float type numbers from the user and then divides
    the first number by the second and display the result along with the numbers.
*/

#include<stdio.h>

int main()
{
    float a, b, div;

    printf("Enter First number : ");
    scanf("%f", &a);

    printf("Enter Second number : ");
    scanf("%f", &b);

    div = a/b;

    printf("The Division desult of %f and %f is = %f\n", a, b, div);

    return 0;
}
