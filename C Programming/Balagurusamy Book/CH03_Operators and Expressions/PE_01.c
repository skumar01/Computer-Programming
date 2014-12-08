/*  Given the values of the variables x, y and z, write a program to rotate their values
    such that x has the value of y, y has the value of z, and z has the value of x.
*/

#include<stdio.h>

int main()
{
    int x, y, z, temp;

    printf("Enter three number : \n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before Rotating the numbers : \n");
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After Rotating the numbers : \n");
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);

    return 0;
}
