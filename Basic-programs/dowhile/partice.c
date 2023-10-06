#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if(b>max)
      max = b;
    if(c>max)
     max=c; 
    printf("%d is maximum number\n",a,b);
    return 0;
}