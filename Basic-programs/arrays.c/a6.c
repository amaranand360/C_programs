// boubleshort 
#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[10],temp;
    printf("enter size of arry:");
    scanf("%d",&n);
    printf("Enter element of array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    { for ( j = 1; j < n-i; j++)
    { if ( arr[j] < arr[j-1])
      {
        temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }  
    }  
    }
    printf("the element of array in ascending order is");
     printf("\n");
    for ( i = 0; i < n; i++)
    {
       printf("\t %d",arr[i]);
    }
       return 0; 
}