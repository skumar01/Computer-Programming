/*  Write a program to read three values using scanf statement and print the following
    results:
    (a) Sum of the values
    (b) Average of the three values
    (c) Largest of three
    (d) Smallest of three
*/

#include<stdio.h>

int main()
{
    int a, b, c, sum, large, small;
    float ave;

    printf("Enter the three number : \n");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    ave = (a + b + c)/3;

    large = (a > b)?(a > c)?a:c:b;
    small = (a < b)?(a < c)?a:c:b;

    printf("Sum of %d, %d and %d is = %d\n", a, b, c, sum);
    printf("Average of %d, %d and %d is = %.2f\n", a, b, c, ave);
    printf("The largest number from %d, %d and %d is  = %d\n", a, b, c, large);
    printf("The Smallest number from %d, %d and %d is = %d\n", a, b, c, small);

    return 0;
}
