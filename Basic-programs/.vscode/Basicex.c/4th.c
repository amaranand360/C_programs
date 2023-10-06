#include<stdio.h>
//  clacutate area & perimeter of cirle & retangle
int main()
{
   float a,b,c,d,e,f;

printf("Enter length[radious of circle] & breath of retangle:\n ");
scanf("%f%f",&a,&b);
c= a*b;
d= 2*(a+b);
e= 2*3.14*a;
f= 3.14*a*a;
printf("the area of retangle is:%f \n",c);
printf("the perimeter of retangle is:%f \n",d);
printf("the dimeater of circle is:%f \n ",2*a);
printf("the perimeter of circle is:%f \n ",e);
printf("the area of circle is:%f \n ",f);
    return 0;

}