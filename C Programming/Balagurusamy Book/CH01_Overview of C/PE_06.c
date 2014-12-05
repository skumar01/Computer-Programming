/* Write a program to output the following multiplication table:
        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        . . . . .
        . . . . .
        5 x 10 = 50
*/

#include<stdio.h>

int main()
{
    int n, i, mul;

    n = 5;
    i = 1;

    while(i<=10)
    {
        mul = n*i;
        printf("%d x %d = %d \n", n, i, mul);
        i++;
    }
    return 0;
}
