// #include<stdio.h>
// #include<string.h>
// int main (){
//     char str[50];
//     printf("Enter the string\n");
//     scanf("%s",str);
//     //gets(str);
//     printf (" After the reverse of a string: %s ", strrev(str)); 
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main (){
     char str[50];
     int i, len, temp; 
     printf("Enter the string\n");
     gets(str);
    printf (" \n Before reversing the string: %s \n", str);
    len = strlen(str);
    for (i = 0; i < len/2; i++) 
    { 
     temp = str[i]; 
     str[i] = str[len - i - 1]; 
     str[len - i - 1] = temp; 
    }
    printf (" After reversing the string: %s", str);
    return 0;
}
