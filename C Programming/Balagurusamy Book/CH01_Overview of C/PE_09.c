/*  Relationship between Celsius and Farenheit is governed by the formula
                    F = ((9*c)/5)+32
    Write a program to convert the temperature.
*/

#include<stdio.h>
int main()
{
    float F, C;

    C = 50.0;
    F = ((9*C)/5)+32;
    printf("%f Celsius is equivalent to %f Farenheit.\n", C, F);

    F = 100.0;
    C = ((F - 32)*5)/9;
    printf("%f Farenheit is equivalent to %f Celsius.\n", F, C);

    return 0;
}
