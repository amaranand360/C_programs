#include <stdio.h>
// calcuate average of n number;
int main(){
  int n,i ;
  float avg,sum = 0 ;
   printf("\nEnter the vlue of n : ");
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    sum = sum + i;
   }
   avg = sum/n;
  printf("\n the sum of first %d number =%f",n,sum);
  printf("\n the avg of first %d number =%.2f",n,avg);
    return 0;
}

//  do
//    {
//     sum = sum +i;
//     i++;
//    } while (i<=n);
//   avg = sum/n;