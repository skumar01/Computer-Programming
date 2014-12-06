/*  Write a program to illustrate the use of typedef declaration in a program.
*/

#include<stdio.h>

int main()
{
    typedef int Integer;
    Integer a, b, c;
    a = 5;
    b = 7;
    c = 9;

    printf("a = %d\nb = %d\nc = %d\n",a, b, c);

    return 0;
}
