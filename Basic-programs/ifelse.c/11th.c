// #include<stdio.h>
// void main(){
// int x,y,z,r,o;
// printf("Enter the valu of x,y,z,r:\n");
// scanf("%d %d %d %d",&x,&y,&z,&r);
// o = (3*x)/y-z+r;
// printf("The output is:%d",o);
// }

// #include<stdio.h>
//   void main(){
//       int a =10;
//       if (a=11){
//           printf("I am 11");
//       }
//       else{
//           printf("I am not 11");
//       }
//   }

// #include<stdio.h>
//  void main(){
//     int a,b,c,series;
//     printf("enter three degit between (0-9) :");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("write all digits in continous : ");
//     scanf("%d",&series);
//     int arm = (a*a*a)+(b*b*b)+(c*c*c);
// //     if(a == 0){
// //         printf("this number is 2 digit its not possible to create a armstrong number");
// //         }
// //     if(arm == series)
// //         printf("%d is a armstrong value",arm);
// //     else
// //         printf("the given number is not armstrong");
// // }
// (arm == series) ? printf("the given number is armstrong"):printf("the given number is not armstrong");
//  }


 // // calcuate incometax paid by employe

#include<stdio.h>
int main(){

 float a;
printf("Enter total income amount in(L):\n");
scanf("%f",&a);

if ( a >= 0 && a < 2.5){
printf("the payable income tax amount is zero");
}
else if (a >= 2.5 && a < 5){
printf("the payable income tax amount in lack is %.4f",(a*5)/100);
}
else if (a >= 5 && a < 10){
printf("the payable income tax amount in lack is %.2f",(a*20)/100);
}
else if ( a >= 10){
printf("the payable income tax amount in lack is %.2f",(a*30)/100);
}
else if (a < 0)  {
    printf("the invalide input");
}
else{
    printf("please enter a valid amount");
}
    return 0;
} 

