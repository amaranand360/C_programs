// //Write a C program to find cube of any number using function.
// #include<stdio.h>
// double cube(float a);
// int main(){
//     float a;
// printf("Enter a number:\n");
// scanf("%f",&a);
// double c = cube(a);
// printf("The cube of %.3f = %.3lf",a,c);
//     return 0;
// }

// double cube(float a){
//     return a*a*a;
// }

//Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
void max(int a,int b);
void min(int a,int b);

int main(){
    int a,b;
    printf("Enter a 1st number:\n");
    scanf("%d",&a);
    printf("Enter a 2st number:\n");
    scanf("%d",&b);
max(a,b);
min(a,b);
    return 0;
}
void max(int a,int b){
      (a>b)? printf("The maximum number = %d\n",a): printf("The maximum number = %d\n",b);
}
void min(int a,int b){
    (a>b)? printf("The minimum number = %d\n",b): printf("The minimum number = %d\n",a);
}