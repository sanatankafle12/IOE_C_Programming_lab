/*Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm)*/

#include <stdio.h>

int main()
{
   int minor =4,major =6;
   float area, pi = 3.14;
   area = pi*minor*major;
   printf("The area of the ellipse with minor axis 4 and major axis 6 is %.2f cm",area);
   return 0; 
}