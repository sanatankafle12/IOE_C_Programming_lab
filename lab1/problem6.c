/*Write  a  program  to  calculate  simple  interest  for  a  given  P=4000,  T=2,  R=5.5.  (I  = P*T*R/100) */

#include <stdio.h>

int main()
{
    int p=4000,T=2;
    float R = 5.5, I;
    I = (p*T*R)/100.0;
    printf("The simple interest is %.2f",I);
    return 0;
}