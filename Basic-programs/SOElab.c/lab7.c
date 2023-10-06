// #include<stdio.h>
// int main(){
//     int n,i,sum =0;
//     printf("Enter the limit of number:");
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         sum+=i;
//     }
//     printf("Tne sum of first %d neatural number is = %d",n,sum);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    double b,x,power;
    printf("Enter the base :");
    scanf("%lf",&b);
    printf("Enter the exponent:");
    scanf("%lf",&x);

    power = pow(b,x);
    printf("%.2lf ^ %.2lf = %.2lf",b,x,power);
    return 0;

}
