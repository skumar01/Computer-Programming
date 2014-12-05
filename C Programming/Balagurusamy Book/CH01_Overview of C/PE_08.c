/*  Given the values of three variables a, b and c, write a program to compute and display
    the value of x, where
                            x=a/b-c
    Execute your program for the following values:
    (a) a = 250, b = 85, c = 25
    (b) a = 300, b = 70, c = 70
    comment on the output in each case.
*/

#include<stdio.h>
//int ans(int x, int y, int z);

int main()
{
    int a, b, c;
    float x;
    a = 250;
    b = 85;
    c = 25;
    printf("b - c value is %d is for first case, it should greater then 0\n", b-c);
    x = a/(b-c);
    printf("Given calculation result is %f\n",x);

    a = 300;
    b = 70;
    c = 70;
    printf("b - c value is %d is for second case, it should greater then 0\n", b-c);
    x = a/(b-c);
    printf("Given calculation result is %f\n",x);
    return 0;
}
