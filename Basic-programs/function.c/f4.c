// //Write a C program to find all prime numbers between given interval using functions.
// #include<stdio.h>
// void print_prime(int a,int b);
// int main(){
//     int a,b;
//     printf("Enter first number:");
//     scanf("%d",&a);
//     printf("Enter last number:");
//     scanf("%d",&b);
//     print_prime(a,b);
//     return 0;
// }
// void print_prime(int a,int b){
//     int i,count = 0;
//     for ( i = a; i <= b; i++)
//     {
//      if (i/2>1 && i%2==0 || i/3 >1 && i%3==0 || i/5 >1 && i%5==0 ||i/7 >1 && i%7==0)
//      {
//     // break; 
//      } 
//      else{
//         printf("%d\t",i);
//      }  
//     }
// }

#include<stdio.h>
int stringlength (char str[]);

int main(){
    char str[25];
    printf("Enter a string:");
    scanf("%s", str);
    printf("String is %s and its length is %d\n\n", str, stringlength(str));

    return 0;
}
int stringlength (char str[]){
    int length; 
    for (length=0; str[length]!='\0'; length++); 
    return length; 
}