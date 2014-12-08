/*  Given three values, write a program to read three values from keyboard and print out the
    largest of them without using "if" statement.
*/

#include<stdio.h>

int main()
{
    int a, b, c, large;
    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    large = (a > b)?(a > c)?a:c:b;

    printf("The largest number is = %d\n", large);

    return 0;
}
