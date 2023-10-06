#include<stdio.h>
#include<string.h>
int main(){
     FILE *fptr;
     fptr = fopen("text.txt","r");
     char str[40];
    
     while (fgets(str,40,fptr) != NULL)
     {
        printf("%s",str);
     }
    
     fclose(fptr);
     printf("\nData readed succesfully");

    return 0;
} 