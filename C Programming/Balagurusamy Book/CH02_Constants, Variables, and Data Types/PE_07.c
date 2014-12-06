/*  Write a program to do the following:
    (a) Declare x and y as integer variables and z as a short integer variable.
    (b) Assign two 6 digit numbers to x and y
    (c) Assign the sum of x and y to z
    (d) Output the values of x, y and z
    Comment on the output.
*/

#include<stdio.h>

int main()
{
    int x, y;
    short int z;

    x = 673456;
    y = 783476;

    z = x + y;

    printf("The sum of numbers %d and %d is equivalent to %d\n", x, y, z);
    printf("the short integer variable size is small then result so result has not stored in this variable correctly\n");

    return 0;
}
