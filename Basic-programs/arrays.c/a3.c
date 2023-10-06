// find sum,mean and product of array element , even num, odd num in array 
#include<stdio.h>
int main(){ 
    int arr[10],i, even = 0,odd =0,sum = 0; ;
    long int pro = 1;
    float mean = 0.0;
    printf("Enter elements in array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n the even elements are:");
    for(i=0; i<10; i++)
    {
        if(arr[i]%2 == 0)
        {
         printf("%d\t",arr[i]);
         even++;
        }
        
    }    
    printf("\n The odd elements are :");
    for(i=0; i<10; i++)
    {   
        if(arr[i]%2 != 0)
          { 
            printf("%d\t",arr[i]);
            odd++;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
        pro = pro * arr[i];
    }
    // for ( i = 0; i < 10; i++)
    // {
    //      pro = pro * arr[i];
    // }
    mean = (float)sum/10;
    printf("\n the total even elements are :%d ",even);
    printf("\n the total odd elements are :%d ",odd);
    printf("\nThe sum of all array element = %d",sum);
    printf("\nThe product of all array element = %ld",pro);
    printf("\nThe mean of all array element = %.2f",mean);
    return 0;
}

// find the sum of 10 element of an integer array of size 10.
// #include<stdio.h>
// int main()
// { 
//     int i,arr[10],sum = 0;
//     printf("Enter elements in array : ");
//     for(i=0; i<10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//      for ( i = 0; i < 10; i++)
//     {
//         sum = sum + arr[i];
//     }
//      printf("\nThe sum of all array element = %d",sum);
//    return 0; 
// }