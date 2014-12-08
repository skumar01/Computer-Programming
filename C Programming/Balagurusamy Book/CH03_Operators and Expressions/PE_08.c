/*  The total distance travelled by a vehicle in t seconds is given by
            distance = ut + (at^2)/2
    Where u is the initial velocity (meters per second), a is the acceleration
    (meter per second ^ 2). Write a program to evaluate the distance travelled at regular
    intervals of time, given the value of u and a. The program should provide the
    flexibility to the user to select his own time intervals and repeat the calculations
    for different values of u and a.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float u, a, t, dis;
    int f;

    while(1)
    {
        printf("Enter '1' to start or '0' to exit :  \n");
        scanf("%d", &f);

        if(f == 1)
        {
            printf("Now Calculator is Starting ..........\n");
        }
        else if(f == 0)
        {
            printf("Exiting from Calculator .............\n");
            exit(0);
        }
        else
        {
            printf("You have Entered the wrong number\n");
            continue;
        }

        printf("Enter the initial velocity : \n");
        scanf("%f", &u);
        printf("Enter the acceleration : \n");
        scanf("%f", &a);
        printf("Enter the time : \n");
        scanf("%f", &t);

        dis = (u * t) + ((a * t * t)/2);

        printf("You have travelled %.2f meters\n\n\n", dis);
    }

    return 0;
}
