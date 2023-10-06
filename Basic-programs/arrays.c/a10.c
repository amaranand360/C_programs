

#include <stdio.h>

void main()
{ int n,mid,T,i;
  int min = 0;
printf("Enter size of the array : ");
scanf("%d", &n);
int arr[n];
int max=n-1;
printf("Enter elements in array : ");
for ( i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

printf("Enter which element want to search:\n");
scanf("%d", &T);


while (min <= max)
{
    mid = (min+max)/2;
    if(arr[mid] == T)
      {
        printf("\n %d is in list at %dnd position\n",T,mid+1);
        break;
    }
    else if(arr[mid]<T)
    {
        min=mid+1;
    }
    else if(arr[mid]>T){
        max=mid-1;
    }
    else{
        printf("\n %d is not in list \n",T);
    }
    
    }

}
