#include<stdio.h>
int main(){
    // calcuate the sum diffrence mui & div;
    char op;
    float a,b,result;
   printf("Enter oprator (special chearter) \n");
   scanf("%c",&op);

   if (op == '+' ||op == '-' ||op == '*' ||op == '/' ||op == '%' )
   {
     printf("Enter two number:\t");
     scanf("%f %f",&a,&b);
    {switch (op)
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
    }
   }
   else{
  printf("Invalid (piease enter a valid oprator)");
   }
    printf("%.2f %c %.2f = %.2f", a, op, b, result);
return 0;
} 

// printf("the sum is: %g \n the mul:%g \n the diff: %g \n the div: %g \n",a+b,a*b,a-b,a/b);
   // printf("the product is: %g \n",a*b);
   // printf("the diffrence is: %g \n",a-b);
   // printf("the ratio is: %g \n",a/b);