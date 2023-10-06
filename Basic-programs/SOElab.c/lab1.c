// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("Enter two numbers:\n");
//     scanf("%f %f",&a,&b);
//     printf("before sweapping:a=%f,b=%f \n",a,b);
//     c=a;
//     a=b;
//     b=c;
// printf("after sweapping:a=%f,b=%f",a,b);
//     return 0;
// }

#include<stdio.h>
int main(){
 int a,b;
  printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
     printf("before sweapping:a=%d,b=%d \n",a,b);
     a=a+b;
     b=a-b;
     a=b-a;
     printf("after sweapping:a=%d,b=%d \n",-a,b);
    return 0;
}