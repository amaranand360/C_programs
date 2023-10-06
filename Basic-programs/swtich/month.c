#include<stdio.h>
int main(){
    int month;
    printf("Enter month no[1-12]:\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("31 days in %dth month",month);
        break;
    case 4:
         printf("30 days in %dth month",month);
         break;
    case 2:
        printf("28 or 29 days in this month"); 
        break;   
    case 3:
        printf("31 days in %dth month",month);
        break;    
    case 5:
        printf("31 days in %dth month",month);
        break;
    case 6:
        printf("30 days in %dth month",month);
        break;     
    case 7:
        printf("31 days in %dth month",month);
        break;   
    case 8:
        printf("31 days in %dth month",month);
        break;
    case 9:
        printf("30 days in %dth month",month);
        break;  
    case 10:
        printf("31 days in %dth month",month);
        break;
    case 11:
        printf("30 days in %dth month",month);
        break;    
    case 12:
        printf("31 days in %dth month",month);
        break;                  
    default:
        printf("Please enter valid month no.");
        break;
    }
    return 0;
}