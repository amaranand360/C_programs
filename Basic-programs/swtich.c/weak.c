#include<stdio.h>
int main(){
    int n;
    printf("Enter number[1-7]:\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
         printf("%d stand for monday",n);
        break;
    case 2:
        printf("%d stand for tuesday",n);
        break;
    case 3:
          printf("%d stand for wednersday",n);
        break;    
    case 4:
         printf("%d stand for thrushday",n);
        break;
    case 5:
         printf("%d stand for friday",n);
        break;        
    case 6:
         printf("%d stand for saturday",n);
        break;    
    case 7:
         printf("%d stand for sunday",n);
        break;    
    default:
          printf("please Enter valid day no.");
        break;
    }
    return 0;
}