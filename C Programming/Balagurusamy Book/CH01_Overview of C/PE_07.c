/*  Given two integers 20 and 10, write a program that uses a function add() to add these
    two numbers and sub() to find the difference of these two numbers and then display the
    sum and difference in the following form:
        20 + 10 = 30
        20 - 10 = 10
*/

#include<stdio.h>
int add(int x, int y);
int sub(int x, int y);

int main()
{
    int a,b,ans1,ans2;

    a = 20;
    b = 10;

    ans1 = add(20, 10);
    ans2 = sub(20, 10);

    printf("%d + %d = %d\n", a, b, ans1);
    printf("%d - %d = %d\n", a, b, ans2);
    return 0;
}

int add(int x, int y)
{
    int k, l, m;
    k = x;
    l = y;
    m = k + l;
    return m;
}

int sub(int x, int y)
{
    int k, l, m;
    k = x;
    l = y;
    m = k - l;
    return m;
}
