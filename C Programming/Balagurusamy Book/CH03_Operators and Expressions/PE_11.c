/*  Write a program to read a four digit integer and print the sum of its digits.
    Hint:  Use / and % operators.
*/

#include<stdio.h>

int main()
{
    int n, sum;
    sum = 0;

    printf("Enter a four digit number : ");
    scanf("%d", &n);

    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("The sum of all digit of above number is = %d\n", sum);

    return 0;
}
