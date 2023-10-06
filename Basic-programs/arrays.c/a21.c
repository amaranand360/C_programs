// print all negative element of array
#include<stdio.h>
#include<conio.h>
int main(){ 
    
    int arr[20];
    int i, n;
    int max = arr[0];
     int min = arr[0];

    printf("Enter size of the array : ");
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

    for(i=0; i<n; i++)
     {
        if( arr[i] <  min)
        {
            min = arr[i];
        }   
     }   
        printf("\n Minimum element = %d",min);
       return 0;
}