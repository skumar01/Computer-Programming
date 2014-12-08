/*  Given an integer number, write a program that displays the number as follows:
        First line      :   all digits
        Second line     :   all except first digit
        Third line      :   all except first two digits
        ...................
        Last line       :   The last digit
        For example, the number 5678 will be displayed as:
        5678
        678
        78
        8
*/

#include<stdio.h>

int main()
{
    int n, n1, i, dev = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);
    n1 = n;

    for(i=1;n1 > 0;i++)
    {
        n1 = n1 / 10;
        if(n1 == 0)
        {
            break;
        }
        dev = dev * 10;
    }

    printf("Dev = %d\n", dev);

    while(n > 0)
    {
        printf("%d\n", n);
        n = n%dev;
        dev = dev/10;
    }

    return 0;
}
