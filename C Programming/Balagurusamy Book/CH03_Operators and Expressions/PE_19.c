/*  Write a program that determines whether a given integer is odd or even and displays
    the number and description on the same line.
*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if(n%2 == 0)
    {
        printf("Entered Number '%d' is a even number", n);
    }
    else
    {
        printf("Entered Number '%d' is a odd number", n);
    }

    return 0;
}
