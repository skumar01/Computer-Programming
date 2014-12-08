/*  Write a program to compute the values of square-roots and squares of the numbers
    0 to 100 in steps 10 and print the output in a tabular form as shown below.
    --------------------------------------------------------------------------
        Number                  Square-root                 Square
        0                           0                          0
        100                         10                         10000
    --------------------------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, s, sr;
    printf("--------------------------------------------------------------------\n");
    printf("Number \t\t\tSquare-root \t\t\tSquare\n");
    for(n = 0; n <= 100; n++)
    {
        s = n * n;
        sr = sqrt(n);
        printf("%d \t\t\t\t%d\t\t\t%d\n", n, sr, s);
    }
    printf("--------------------------------------------------------------------\n");

    return 0;
}
