#include<stdio.h>
int main(){
    char name[50];
    printf("Enter the name of string\n");
   // scanf("%s",name);
    //gets(name);
   //printf("the name is %s\n",name);
    //puts(name);
    //puts(name);
    fgets(name,50,stdin);
    printf("Tne NAME IS %s",name);
    //puts(name);
    return 0;
}