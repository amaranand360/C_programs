// // Q. find the greatest number

//  #include<stdio.h>
// int main(){
//      float a,b,c,d;
//     printf("Enter 4 numbers: \n");
//     scanf("%f %f %f %f",&a,&b,&c,&d);
//     if (a>=b && a>=c && a>=d) {
//         printf("the greatest number is :%f",a);      
//     }  else if(b>=c && b>=d && b>=a) {
//     printf("the greatest number is :%f",b);
//     } else if(c>=d && c>=a && c>=b){
//     printf("the greatest number is :%f",c);
//     } else if ( d>=a && d>=b && d>=c){
//     printf("the greatest number is :%f",d);
//     }
// else {
//     printf("the  numbers invalid");
// }
// return 0;
// } 

#include <stdio.h>
int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
        amt = unit * 0.50;
    else if(unit <= 150)
        amt = 25 + ((unit-50) * 0.75);
    else if(unit <= 250)
        amt = 100 + ((unit-150) * 1.20);
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);
    return 0;
}