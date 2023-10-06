#include<stdio.h>
int main(){
  int n,i,sum = 0;
  printf("Enter a number :\n");
  scanf("%d",&n);
  printf("the table is:\n");
  i=1;
while (i<=10)
{
    sum = sum+(n*i);
    printf("\n %d*%d = %d",n*i);
     i++;
}
printf("the sum of all element of table is:%d\n",sum);

return 0;
    }


//  i=1;
// while (i<=n)
// { 
//     printf("%d\n",i);
//     i++;
// }

// i=1; 
// product=1;
// while (i<=10)
// {
//     printf("%d\n",n*i);
//     i++; 
// }
// printf("thank you");
//  return 0;
//    }

// sum = 0;
// product =1;
// i=1;
// while (i<=n)
// {
//     sum=sum+i;
//     product=product*i;
//     i++;
// }
// printf("the sum is:%d\n & the product is:%d\n",sum,product);