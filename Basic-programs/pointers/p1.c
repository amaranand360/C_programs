#include<stdio.h>
int main(){
    int a,b,c,sum,pro;
    float ava;
    int *ptr1, *ptr2 ,*ptr3; 
    ptr1 = &a; 
    ptr2 = &b;
    ptr3 = &c;
    printf("Enter 3 number\n");
    scanf("%d %d %d",ptr1,ptr2,ptr3);
    sum = *ptr1 + *ptr2 + *ptr3;
    pro = *ptr1 * *ptr2 * *ptr3;
    ava =   (float)sum/3;

    printf("the sum of 3 number = %d\n",sum);
    printf("the sum of 3 number = %d\n",pro);
    printf("the ava of 3 number = %.2f\n",ava);
    return 0;
}