// calcuate the simple interst;

#include<stdio.h>
int main(){
    float p,r,t,si,CI;
    printf("Enter a principle amount:");
    scanf("%g",&p);
     printf("Enter a rate of interst:");
    scanf("%g",&r);
     printf("Enter time period in year:");
    scanf("%g",&t);
    si = (p*r*t)/100 ;
    CI = p*(pow((1 + r / 100), t));
     printf("the simple interst amount is: %g\n",si);
     printf("the total payable amount is:%g \n",p+si);
    printf("the compound interst amount is: %g\n",CI);

    return 0;
}