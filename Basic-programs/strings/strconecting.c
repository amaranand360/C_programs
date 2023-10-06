#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the 2nd string\n");
    scanf("%s",str2);
    strcat(str1, str2);
    puts(str1);
   // puts(str2);
 return 0;
}
