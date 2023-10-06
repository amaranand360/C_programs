#include<stdio.h>
void sample(int *p, float *q, char *s);
int main(){
    int a; 
    float b; 
    char c[100]; 
    printf("Enter an integer value:");// Read int, float and 
    scanf("%d", &a); 
    printf("Enter a float value:"); 
    scanf("%f", &b); 
    printf("Enter a string value:");
    scanf("%s",c);
    printf("Integer is %d\n", a); // Print their as READ 

    printf("Float value is %f\n ", b); 
    printf("String value is %s\n", c); 
    sample (&a, &b, c); // transfer addresses of all 3 

    printf("Integer is %d\n", a);// Print their modified 

    printf("Float value is %f\n ", b); 
    printf("String value is %s\n", c); 
    return 0;
}
void sample(int *x, float *y, char *z){
    *x*=*x; 
    *y+=12.5; 
    printf("enter a string value:"); 
    scanf("%s", z); 
    return;
}