// #include<stdio.h>
// int main(){
//     int a;
// printf("Enter a number:\n");
// scanf("%d",&a);
// a>0 ? printf("the number is natural"):printf("Not natural number");
//  return 0;
// }

// power calculator

#include<stdio.h>
#include<math.h>
int main(){
double base,expo,power;
printf("Enter a base:");
scanf("%lf",&base);
printf("Enter a exponent:");
scanf("%lf",&expo);

power = pow(base,expo);
printf("%.2lf ^ %.2lf = %.2lf",base,expo,power);
    return 0;
}
// root calculatot

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double num, root;

//     printf("Enter any number to find square root: ");
//     scanf("%lf", &num);

//     root = sqrt(num);

//     printf("Square root of %.2lf = %.2lf", num, root);

//     return 0;
// }