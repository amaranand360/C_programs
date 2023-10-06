#include <stdio.h>
int main()
{
  // int n1,n2,i,gcd;
  // printf("Enter two number\n");
  // scanf("%d %d",&n1,&n2);
  // for ( i = 1; i <=n1 && i<=n2; i++)
  // {
  //   if(n1%i==0 && n2%i==0){
  //     gcd = i;
  //   }
  // }
  // printf("The gcd of %d and%d = %d",n1,n2,gcd);

    int n;
    n=4;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        sum += i;
      }
    }
    if (sum == n)
    {
      printf("given number is perfect number!");
    }
    else
      printf("given number is not a perfect number!");
      
  

  return 0;
}