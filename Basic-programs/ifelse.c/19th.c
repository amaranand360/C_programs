#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    max = (a>=b) ? a:b;
    printf("tne maximum number = %d",max);
    return 0; 
}

#include<stdio.h>
int main()
 {    float f,c;
      printf("Enter tem value in degree fahrenheit:");
      scanf("%f",&f);
      c = (f-32)*5/9;
     printf("The tem in centigrade = %f",c);
     return 0;
}