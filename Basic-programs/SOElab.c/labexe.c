// #include<stdio.h>
// int main(){
//        int a,b;
//        printf("Enter the first number\n");
//        scanf("%d",&a);
//        printf("Enter the 2nd number\n");
//        scanf("%d",&b);
//        printf("before swap the value of a = %d and b = %d\n",a,b);
//        a = a+b;
//        b = a-b;
//        a = b-a;
//        printf("after swap the value of a = %d and b = %d\n",-a,b);    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     float p,r,t,si;
//     printf("Enter the principle amount");
//     scanf("%f",&p);
//      printf("Enter the rate amount");
//     scanf("%f",&r);
//      printf("Enter the time period in year");
//     scanf("%f",&t);
//     si = (p*r*t)/100;
//     printf("The simple interst amount is = %.2f",si);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//       int a,b,c,max;
//       printf("Enter the 3 numbers\t");
//       scanf("%d %d %d",&a,&b,&c);
  
//       if(a>=b){
//         if(a>=c)
//           printf("The maxinum num is %d",a);
//         else{
//           printf("The maxinum num is %d",c);
//         }
//       }
//       else{
//           if(b>=c)
//           printf("The maxinum num is %d",b); 
//           else{
//             printf("The maxinum num is %d",c);
//           }
//       }
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
  
//      float a,b,c,D,r1,r2,realpart,imgpart;
//      printf("Enter the coffcient of a,b & c\n");
//      scanf("%f %f %f",&a,&b,&c);
//      D =(b*b) - 4*a*c;
//      printf("The value of discriment = %f\n",D);
//      if (D>0)
//      {
//      r1 = (-b + sqrt(D))/2*a;
//      r2 = (-b - sqrt(D))/2*a;
//       printf("The value of root1 =%.2f and root2 =%.2f",r1,r2);
//      }
//      else if(D==0) 
//      {  r1 = -b/2*a;
//       printf("The value of root1 = root2 =%.2f",r1);
//     }
//      else{
//        realpart = -b/2*a;
//        imgpart = sqrt(-D)/2*a;
//       printf("\nThe value of root1 =%.2f + %.2f and root2 =%.2f - %.2f",realpart,imgpart,realpart,imgpart);
//      }
    
//     return 0;
// }

//   char type;
//   int x,y;
//   float rate;
//   printf("Enter the type of vichle\n");
//   scanf("%s",&type);
//   if(type=='c' ||type=='C'||type=='b'||type=='B'||type=='t'||type=='T')
//   {  printf("Enter the time[0-24] entering in parkinglot\n");
//      scanf("%d",&x);
//      printf("Enter the time[0-24] exit from the parkinglot\n");
//      scanf("%d",&y);
//     switch (type)
//     {
//     case 'c':
//     case 'C':
//       if( y-x <= 2)
//       rate = (y-x)*20;
//       else{
//         rate = (y-x)*40;
//       }
//       break;
//     case 'b':
//     case 'B':
//       if( x-y <= 2)
//       rate = (x-y)*40;
//       else{
//         rate = (x-y)*50;
//       }
//       break;
//     case 't':
//     case 'T':
//       if( x-y <= 2)
//       rate = (x-y)*30;
//       else{
//         rate = (x-y)*40;
//       }
//       break;
//     default:     
//        printf("invalide input /please enter a valied input/");
//       break;
//     }
//   }
//     printf("\n The parking fee is = %.2f",rate);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int i,a,b,n,sum=0;
//  printf("Enter a, b, n");
//  scanf("%d%d%d", &a,&b,&n);
//  for (int i = 2; i < n; i++)
//  {
//  sum = a + b;
//  a = b;
//  b = sum;
//  }
//  printf("the nth number is:%d",sum);
//  return 0;
// }

#include<stdio.h>
#include<math.h>
int fac(int x);
int main()
{
float x,Q,sum=0;
int i,j,limit;

printf("Enter the value of x of sinx series: ");
scanf("%f",&x);
printf("Enter the limit upto which you want to expand the series: ");
scanf("%d",&limit);
Q=x;
x = x*(3.1415/180);
for(i=1,j=1;i<=limit;i++,j=j+2)
{
if(i%2!=0)
{
sum=sum+pow(x,j)/fac(j);
}
else
sum=sum-pow(x,j)/fac(j);
}
printf("Sin(%0.1f): %f",Q,sum);
}
int fac(int x)
{
int i,fac=1;
for(i=1;i<=x;i++)
fac=fac*i;
return fac;
}


