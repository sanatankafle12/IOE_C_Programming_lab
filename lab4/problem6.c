//Write a program to determine all roots of a quadratic equation ax +bx+c=0. Read the values of a, b, and c from the user.

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,r1,r2;
    printf("Enter a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    r1 = (-b + pow((b*b-4*a*c),1/2))/(2*a);
    r2 = (-b - pow((b*b-4*a*c),1/2))/(2*a);
    printf("The two roots are %f %f",r1,r2);
    return 0;
}