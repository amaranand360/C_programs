//  // find sum of n neatural number
//  #include<stdio.h>
//  int main(){
//    int sum,n,i;
//    printf("Enter a number:");
//    scanf("%d",&n);
//    sum=0;
    
//   for ( i = 1; i<=n ; i++)
//       {
//       printf("%d \n",i);
//       sum = sum + i;
//       }

//    printf(" the sum is : %d\n",sum);

//     return  0;
//   }


// // find sum of all even number (100-200)
// #include<stdio.h>
// int main(){
//    int i,sum;
//    sum = 0;
//    for(i=100;i<=200;i+=2)
//    { 
//        sum = sum +i;
//     }
//    printf("the sum of all even number between (100-200)is:%d\n",sum);
//     return 0;
//   }

// find the factorial of n neatural number(1-12)
  #include<stdio.h>
  int main(){
    long int n,i,fact;
    printf("Enter a positive number:");
    scanf("%ld",&n);
    fact = 1;
    for (i = 1; i <= n; i++)
    {
      fact = fact*i;
    }
    printf("the factorial of input number is:%ld \n",fact);
    return 0;
  }