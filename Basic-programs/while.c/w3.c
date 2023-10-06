//  #include<stdio.h>

//  float diameater(float r);
//  float area(float a);
//  int main(){
//       float x,a,b;
      
//       printf("Enter a radious of circle:\n");
//       scanf("%f",&x);
//     a = diameater(x);
//     b = area (x);
//       printf("dimeater = %.3f",a);
//       printf("area= %.2f",b);
//     return 0;
//  }
//  float diameater(float f){
//        return 2*f;
//  }

// float area(float t){
//       return 3.14*t*t;  
// }

#include<stdio.h>
int main(){
   int num,frist,last,sum;
   printf("Enter a number\n");
   scanf("%d",&num);
   last = num%10;
   printf("%d is the last number\n",last);
   frist = num;
   while (frist > 10)
   {
      frist = frist/10;
   }
   printf(" %d is the frist number\n",frist);
   sum = frist + last;
   printf("%d is the sum of frist and last number\n",sum);
   
   frist = frist + last;
   last = frist - last;
   frist = last - frist;
printf("after sweaping frist = %d,last = %d",-frist,last);
   return 0;
}