/*  Write a program to read two integer values m and n and to decide and print whether
    m is a multiple of n.
*/

#include<stdio.h>

int main()
{
    int m, n;

    printf("Enter the value for variable 'm' : ");
    scanf("%d", &m);
    printf("Enter the value for variable 'n' : ");
    scanf("%d", &n);

    if(m%n == 0)
    {
        printf("Your given value of 'm' is a multiple of value of 'n' \n");
    }
    else
    {
        printf("Your given value of 'm' is not a multiple of value of 'n' \n");
    }

    return 0;
}
