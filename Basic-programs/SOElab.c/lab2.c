// to convert tne tempeautre celsius to fahrenheit &reverse;

#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a tempeautre in celsius:");
    // printf("Enter a tempeautre in fahrenheit:");
    scanf("%g",&a);
    b = (a*9/5)+32;
    //b = (a-32)*5/9;
   printf("The tempeauter in fahrenheit: %g \n",b);
    // printf("the tempeautre in celsius:%g \n",b);
return 0;
}