// // loop.for.
// #include<stdio.h>
// int main(){ 
//     int i,n,count=0;
// printf("Enter a  number:\n");
// scanf("%d",&n);

// for ( i = 1; i <=n; i++)
// { if (n%i == 0) 
//     count = count +1;
// }  
//     if(count == 1)
//     printf("It is not define for prime or non prime number");
//    else if (count == 2){
//     printf("It is a prime number");
//     }
//  else{
//      printf("It is a non-prime number");
//  }    
//  return 0;
// }
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a <=1)
    printf("It is not define for prime or non prime number");
     if (a/2>1 && a%2==0 || a/3 >1 && a%3==0 || a/5 >1 && a%5==0 ||a/7 >1 && a%7==0 || a/11>1 && a%11==0)
     {
    printf("It is a non-prime number");
    }   
    else{
    printf("It is a prime number");
    }
    return 0;
}


//  if(a <=1)
// printf("It is not define for prime or non prime number");
//  else if (a/2 >1 && a%2==0 )
// printf("It is a non-prime number");
//  else if(a/3 >1 && a%3==0)
// printf("It is a non-prime number");
// else if (a/5 >1 && a%5==0)
// printf("It is a non-prime number");
// else if (a/7 >1 && a%7==0)
// printf("It is a non-prime number");
// else 
// printf("It is a prime number");

// return  0;
// }