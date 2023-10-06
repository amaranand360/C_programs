#include<stdio.h>
void pro(int a,int b);
void sum(int a,int b);
void diff(int a,int b);
int main ()
    {   int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
     printf("Enter 2nd number:");
    scanf("%d",&b);
    sum(a,b);
    diff(a,b);
    pro(a,b);

        return 0;
    } 

void pro(int a,int b){
     printf("The product of %d * %d = %d\n",a,b,a*b);
    
}  
void sum(int a,int b){
      printf("The sum of %d + %d = %d\n",a,b,a+b);
}  
void diff(int a,int b){
    printf("The diff of %d - %d = %d\n",a,b,a-b);
}