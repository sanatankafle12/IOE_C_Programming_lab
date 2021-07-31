/*Write a program to calculate area of a circle having its radius (r=5). */

#include <stdio.h>

int main()
{
    int radius = 5;
    float area,pi=3.14;
    area = pi*radius*radius;
    printf("The area of circle having radius 5 is %.2f",area);
    return 0;
}