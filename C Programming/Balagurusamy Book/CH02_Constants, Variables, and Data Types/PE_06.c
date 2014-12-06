/*  Write a program to count and print the number of negative and positive numbers in a
    given set of numbers. Test your program with a suitable set of numbers. Use scanf to
    read the numbers. Reading should be terminated when the value 0 is encountered.
*/

#include<stdio.h>

int main()
{
    int a, n, p, i;

    n = 0;
    p = 0;

    printf("Enter '0' to exit from entering numbers\n\n");
    printf("Enter the numbers :\n");

    for(i=1;;i++)
    {
        scanf("%d", &a);
        if(a == 0)
        {
            break;
        }
        else if(a > 0)
        {
            p = p + 1;
        }
        else
        {
            n = n + 1;
        }
    }

    printf("Total number of entered number = %d\n", --i);
    printf("Total entered Positive number = %d\n", p);
    printf("Total entered negative number = %d\n", n);

    return 0;
}
