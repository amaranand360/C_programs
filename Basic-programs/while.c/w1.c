// #include<stdio.h>
// int main(){
//     int n1,n2;
//     int sum = 0;
//     printf("Enter lower limit number:");
//     scanf("%d",&n1);
//     printf("Enter Upper limit number:");
//     scanf("%d",&n2);
//     int i = n1;
//     while (i <=n2)
//     {
//       //printf("%d\n",i);
//       sum+=i;
//       i++;
//     }
//     printf("The sum of between %d to %d is = %d\n",n1,n2,sum);
//     return 0;
// }
#include<stdio.h>
int main(){
     long int n,i,fact = 1;
     printf("Enter a number which factor requrid\n");
     scanf("%ld",&n);
     printf("The factor of %d is:\n",n);
     for(i = 1; i <= n; i++)
     {
        if( n%i == 0){
       printf("%d\t",i);
        }
     }
  return 0;
}