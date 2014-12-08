/*  Write a program to print the size of variable data types in C.
*/

#include<stdio.h>

int main()
{
    int a;
    short b;
    short int c;
    long d;
    long int e;
    long long f;
    float g;
    double h;
    char i;

    printf("Size of 'int' data type is = %d\n", sizeof(a));
    printf("Size of 'short' data type is = %d\n", sizeof(b));
    printf("Size of 'short int' data type is = %d\n", sizeof(c));
    printf("Size of 'long' data type is = %d\n", sizeof(d));
    printf("Size of 'long int' data type is = %d\n", sizeof(e));
    printf("Size of 'long long' data type is = %d\n", sizeof(f));
    printf("Size of 'float' data type is = %d\n", sizeof(g));
    printf("Size of 'double' data type is = %d\n", sizeof(h));
    printf("Size of 'char' data type is = %d\n", sizeof(i));

    return 0;
}
