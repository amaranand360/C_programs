#include<stdio.h>
int main(){
    /* radious=a, area=b,volume=c,hight=h
    calcuate the area & volume*/
    

    float radious,area,volume,hight;
    
    printf("Enter a radious of circle:");
    scanf("%f",&radious);
    printf("Enter a hight of cylinder:");
    scanf("%f",&hight);
    area = 3.14*radious*radious;
    volume = area*hight;
    printf("the dimeater of circle is:%f \n ",2*radious);
    printf("the perimeter of circle is:%f \n",2*3.14*radious);
    printf("the area of circle is:%f /n ",area);
    printf("the volume of cylinder is:%f \n",volume);

return 0;
}