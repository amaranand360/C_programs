// find final cost of 3 items with gst
#include<stdio.h>
int main(){
float price[3];
printf("Enter price of 3 items:\n");
scanf("%f %f %f",&price[0],&price[1],&price[2]);
printf("\n the totle price of item 1 =%f",price[0]+price[0]*.18);
printf("\n the totle price of item 2 =%f",price[1]+price[1]*.18);
printf("\n the totle price of item 3 =%f",price[2]+price[2]*.18);

    return 0;
}