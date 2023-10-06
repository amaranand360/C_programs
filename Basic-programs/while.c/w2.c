// #include<stdio.h>
// int main(){
//     char ch = 'A';
//     printf("print all alphabate a-z:\n");
//     while (ch <= 'z')
//     {
//         printf("%c\t",ch);
//         ch++;
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
     long int n,num;
    int reverse = 0,l;

    printf("Enter a number\n");
    scanf("%ld",&n);
    num = n;
    while (num != 0)
    {
        l = num%10;
        reverse = (reverse*10) + l;
        num = num/10;
    }
    printf("The number in reverse order = %d\n",reverse);
    
    (reverse == n )? printf("%d is panidrom number\n",n):printf("%d is not panidrom number\n",n);
}