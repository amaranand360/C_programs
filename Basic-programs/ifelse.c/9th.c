
#include <stdio.h>
int main()
{
int a;
printf("Enter a integer number(-0):\n");
scanf("%d",&a);
if(a > 0 || a < 0) {
    if(a>0)
        printf("The number is positive ");
        if(a<0){
        printf("The number is negative");  
        }
}
else{
    printf("The number is nor negative or nor positive");
}   
 
//(a > 0) ? printf("The number is positive "):printf("The number is negative");

 return 0;
 }
