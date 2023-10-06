#include<stdio.h>
int main()
{
     #define MAX_SIZE 100
    int i,n;  
    int arr[20];
    
    printf("Enter size of the array (MAX_SIZE 100) : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the array elements are");
    for ( i = 0; i < n; i++)
    {
        printf("\t %d",arr[i]);
    }
    
   return 0; 
}