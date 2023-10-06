#include<stdio.h>
int main(){
    int a,b,tem;
    int *ptr1 ;
    int *ptr2 ;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    printf("the number before swap num1 = %d, num2 = %d\n",*ptr1,*ptr2);
    tem = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tem;
    printf("the number after swap num1 = %d, num2 = %d\n",*ptr1,*ptr2);
    return 0;
}