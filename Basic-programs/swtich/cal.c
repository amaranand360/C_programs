#include<stdio.h>
int main(){
    // calcuate the sum diffrence mui & div;
    char op;
    float a,b,result;
    printf("Enter oprator (special chearter) \n");
    scanf("%c",&op);
   
    printf("Enter two number:\t");
    scanf("%f %f",&a,&b);
    switch (op)
    {
    case '+':
          result = a+b;
        break;
    case '-':
          result = a-b;
         break; 
    case '*':
          result = a*b;
        break; 
    case '/':
          result = a/b;
        break;    

    default: 
           printf("Invalid operator");
        break;
    }
    printf("%.2f %c %.2f = %.2f", a, op, b, result);
return 0;
} 
