/*  Area of a triangle is given by the formula
                    A = Squrt(S(S-a)(S-b)(S-c))
    Where a, b and c are sides of the triangle and 2S = a + b + c. Write a program to
    compute the area of the triangle given the values of a, b and c.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, A, S;

    a = 5.0;
    b = 7.0;
    c = 6.0;

    S = (a+b+c)/2;
    A = sqrt((S*(S-a)*(S-b)*(S-c)));

    printf("Area of triangle is %f", A);

    return 0;
}
