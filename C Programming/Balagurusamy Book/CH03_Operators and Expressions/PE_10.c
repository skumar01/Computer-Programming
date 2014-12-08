/*  For a certain electric circuit with an inductance L and resistance R, the damped natural
    frequency is given by
                Frequency = sqrt((1/LC)-(R^2/(4*C^2)))

    It is desired to study the variation of this frequency with C (capacitance). Write a
    Program to calculate the frequency for the different values of C starting from 0.01 to
    0.1 in step of 0.01.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float L, C, R, Fre;
    printf("Enter the Inductance : ");
    scanf("%f", &L);
    printf("Enter the Resistance : ");
    scanf("%f", &R);
    for(C = 0.01; C <= 0.1; C = C + 0.01)
    {
        Fre = sqrt((1/L*C)-((R*R)/(4*C*C)));
        printf("Frequency for the %.2f value of C '(capacitance)' is = %.3f\n", C, Fre);
    }

    return 0;
}
