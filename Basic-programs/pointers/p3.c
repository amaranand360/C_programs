#include<stdio.h>
int main(){
    int arr[11];
    int i,sum = 0;
    int *ptr = arr;
    printf("Enter 10 element of array\n");
    for(i = 0 ;i < 11;i++)
      {
        scanf("%d",ptr);
        ptr++;
      }
    printf("The element of array\n");
      for(i=0;i<11;i++){
        printf("%d\t",*ptr);
       // sum = sum + *ptr;
         *ptr++;
      }
   // printf("The sum of element of array = %d\n",sum);
    return 0;
}