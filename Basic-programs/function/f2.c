//Write a C program to find diameter, circumference and area of circle using functions.
#include<stdio.h>
#include<math.h>

double diameter(double a);
double parimeater(double a);
double area(double a);

int main(){
    double a;
    printf("Enter radious of circle:\n");
    scanf("%lf",&a);
double b = diameter(a);
double c = parimeater(a);
double d = area(a);
printf("the diameater of circle %.2lf radious = %.2lf\n",a,b);
printf("the perimeater of circle %.2lf radious = %.2lf\n",a,c);
printf("the area of circle %.2lf radious = %.2lf\n",a,d);
    return 0;
}

double diameter(double a){
    return (2*a);
}

double parimeater(double a){
    return (2*M_PI*a);
}

double area(double a){
    return (M_PI*a*a);
}

//Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
void cheaking(int a);// function deleration
int main(){
    int b;
    printf("Enter a positive number:\n");
    scanf("%d",&b);
    cheaking(b);  // function calling
    return 0;
}
// function defnation
void cheaking(int c){
(c%2 == 0)?printf("%d is a even number\n",c):printf("%d is a odd number\n",c); 
}
    
