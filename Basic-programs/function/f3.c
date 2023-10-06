//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
void cheak_prime(int a);
void cheak_armstorng(int a);
void cheak_perfect(int a);
int main(){
     int a;
     printf("Enter a positive number:");
     scanf("%d",&a);
     cheak_prime(a);
     cheak_perfect(a);
     cheak_armstorng(a);
    return 0;
}
void cheak_prime(int a){
    int i,count = 0;
    for ( i = 1; i <= a; i++)
    {
        if (a%i == 0)
        {
          count = count + 1;
         } 
    }
      if (count == 2) 
        {
          printf("%d is a prime number\n",a);
          printf("%d is not a armstrong number\n",a);
         } 
      else {
         printf("%d is a non-prime number\n",a);
           } 
    }
      
void cheak_perfect(int a){
      int i,sum = 0;
      for(i=1; i< a; i++)
       {
        if (a%i == 0)
        {
            sum = sum +i;
        }  
        }
    (sum == a)? printf("%d is a perfect number\n",a) : printf("%d is not a perfect number\n",a);
}

void cheak_armstorng(int a){
    int x,y,z,sum;
    printf("Enter three number in single digit[0-9]:\n");
    scanf("%d %d %d",&x,&y,&z);
    sum = (x*x*x + y*y*y + z*z*z);
    sum == a ? printf("%d is  a armstrong number\n",a) : printf("%d is not a armstrong number\n",a);
}