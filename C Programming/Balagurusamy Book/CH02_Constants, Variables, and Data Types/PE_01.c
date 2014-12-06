/*  Write a Program to determine and print the sum of the following harmonic series for a
    given value of n:
                        1 + 1/2 + 1/3 + .... + 1/n
    The value of n should be given interactively through the terminal.
*/

#include<stdio.h>

int main()
{
    int n;
    float i, ans;

    printf("Enter a number : \n");
    scanf("%d",&n);

    ans = 0;

    for(i=1;i<=n;i++)
    {
        ans = ans + (1/i);
    }

    printf("The Result of Given Harmonic series for %d number is = %f\n", n, ans);

    return 0;
}
