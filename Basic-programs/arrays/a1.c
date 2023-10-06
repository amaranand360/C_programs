// find final cost of 3 items with gst

#include <stdio.h>
int main()
{
    float gst, price[3];
    printf("Enter price of 3 items:\n");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);
    printf("Enter price of 3 items:\n");
    scanf("%f", &gst);
    printf("\n the totle price of item 1 =%f", price[0] + price[0] * gst);
    printf("\n the totle price of item 2 =%f", price[1] + price[1] * gst);
    printf("\n the totle price of item 3 =%f", price[2] + price[2] * gst);

    return 0;
}