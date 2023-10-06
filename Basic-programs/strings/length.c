// #include<stdio.h>
// int main(){
//     char name[50];
//     int i,count =0;
//     printf("Enter the name of which want to length\n");
//     fgets(name,50,stdin);
//     printf("NAME = %s",name);
//     for ( i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("lenghth = %d",count-1);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    int count;
    
    printf("Enter the string\n");
    gets(s);
    count=strlen(s);
    printf("Length of string = %d\n",count);
    return 0;
}
