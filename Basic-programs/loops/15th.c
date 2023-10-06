// print table and claculate the sum of all element.
//  #include<stdio.h>
//  int main(){
// int i,n,sum = 0;
//  printf("Enter a numer which table you want know :");
//  scanf("%d",&n);
// printf("the table is: \n");
// for ( i = 100; i >= 10 ; i-= 10)
// { 
//   printf(" %d \t",i);  
// // }
// printf("the table is:\n");
// for ( i = 1; i < 11; i++)
// {
//   sum = sum +(n*i);
//   printf("%d\n",n*i);
// }
// printf("the sum of all element of table is:%d\n",sum);
//   return 0;
//   }

 #include<stdio.h>
 int main(){
int i,m,n,sum = 0;
long int pro =1;
float mean;
 printf("Enter a number(m) :");
 scanf("%d",&m);
 printf("Enter a number(n) :");
 scanf("%d",&n);
 
 for ( i = m; i <=n; i++)
 {
  sum = sum + i;
  pro = pro*i;
 }
  mean = (float) sum/(n-m+1);
   printf("\n the sum of numbers from %d to %d =%d",m,n,sum);
   printf("\n the product of numbers from %d to %d =%ld",m,n,pro);
   printf("\n the mean of numbers from %d to %d =%f",m,n,mean);
   return 0;
 }