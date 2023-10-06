#include<stdio.h>
int main(){
    long int n,pro = 1;
    int count = 0,sum = 0,l;

    printf("Enter a number\n");
    scanf("%ld",&n);

   /* do
    {
        count++;
        n = n/10;
    } while (n != 0 || n > 0); 
    printf("%d is total digit of number\n",count);*/
    printf("The number in reverse order \n");
    while (n != 0)
    {
       l = n%10;
       printf("%d",l);
       sum = sum +l;
       pro = pro*l;
       n = n/10;
    }
    printf("\n %d is sum of all digit of number\n",sum);
    printf("\n %ld is product of all digit of number\n",pro);
    return 0;
}