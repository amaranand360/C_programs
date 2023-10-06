/* matrix.c add, sub,scelar mul;
*/

#include<stdio.h>
int main()
{   int i,j,m,n,p,k,a,h,pro=0;

    printf("Please enter no of rows of 1matrix:");
    scanf("%d",&m);
    printf("Please enter no of column of 1matrix:");
    scanf("%d",&n);
    printf("Please enter no of rows of 2matrix:");
    scanf("%d",&p);
    printf("Please enter no of column of 2matrix:");
    scanf("%d",&k);
    int x[m][n],y[m][n],sum[m][n],diff[m][n];

      for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
      {
        printf("Please enter %d row of %d column element of 1st matrix:",i,j);
        scanf("%d",&x[i][j]);
      }
      }
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
      {
        printf("Please enter %d row of %d column element of 2nd matrix:",i,j);
        scanf("%d",&y[i][j]);
      }
      }
     printf("Enter the which want to multiply");
      scanf("%d",&h);

      printf("The element of 1st matrix\n");
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  printf("\t %d",x[i][j]);
       }
          printf("\n");
      }
      printf("The element of 1st matrix\n");
        for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  printf("\t %d",y[i][j]);
       }
          printf("\n");
      }
       printf("The element of scaler matrix of 1st\n");
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  x[i][j] = h*x[i][j]; 
         printf("\t %d",x[i][j]);
       }
          printf("\n");
      }
       printf("The element of scaler matrix of 2nd\n");
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  x[i][j] = h*y[i][j]; 
         printf("\t %d",y[i][j]);
       }
          printf("\n");
      }
      
    if (m == p && n == k)
    {
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
      { sum[i][j] = x[i][j] + y[i][j];
        diff[i][j] = x[i][j] - y[i][j];
      }
      }
    printf("The resultant matrix element of[x+y]:\n");
      for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  printf("\t %d",sum[i][j]);
       }
          printf("\n");
      }
     printf("The resultant matrix element of[x-y]:\n");
       for ( i = 0; i < m; i++)
      { for (j = 0; j < n; j++)
       {  printf("\t %d",diff[i][j]);
       }
          printf("\n");
      }
    }
    else{
        printf("order of matrix is invalide");
    }
    return 0;
}


/* matrix.c add, sub,scelar mul;
*/

// #include<stdio.h>
// int main()
// {   int i,j,m,n,p,k,a,h,pro=0;

//     printf("Please enter no of rows of 1matrix:");
//     scanf("%d",&m);
//     printf("Please enter no of column of 1matrix:");
//     scanf("%d",&n);
//     printf("Please enter no of rows of 2matrix:");
//     scanf("%d",&p);
//     printf("Please enter no of column of 2matrix:");
//     scanf("%d",&k);
//     int x[m][n],y[m][n],sum[m][n],diff[m][n];
    
//      printf("Please enter  row of  column element of 1st matrix:\n");

//       for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//       {
//         // printf("Please enter %d row of %d column element of 1st matrix:",i,j);
//         scanf("%d",&x[i][j]);
//       }
//       printf("\n");
//       }
//        printf("Please enter  row of  column element of 2ndst matrix:\n");
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//       {
//         // printf("Please enter %d row of %d column element of 2nd matrix:",i,j);
//         scanf("%d",&y[i][j]);
//       }
      
//       }
//      printf("Enter the which want to multiply");
//       scanf("%d",&h);

//       printf("The element of 1st matrix\n");
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  printf("\t %d",x[i][j]);
//        }
//           printf("\n");
//       }
//       printf("The element of 2ND matrix\n");
//         for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  printf("\t %d",y[i][j]);
//        }
//           printf("\n");
//       }
//        printf("The element of scaler matrix of 1st\n");
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  x[i][j] = h*x[i][j]; 
//          printf("\t %d",x[i][j]);
//        }
//       }
//        printf("The element of scaler matrix of 2nd\n");
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  x[i][j] = h*y[i][j]; 
//          printf("\t %d",x[i][j]);
//        }
//           printf("\n");
//       }
      
//     if (m == p && n == k)
//     {
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//       { sum[i][j] = x[i][j] + y[i][j];
//         diff[i][j] = x[i][j] - y[i][j];
//       }
//       }
//     printf("The resultant matrix element of[x+y]:\n");
//       for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  printf("\t %d",sum[i][j]);
//        }
//           printf("\n");
//       }
//      printf("The resultant matrix element of[x-y]:\n");
//        for ( i = 0; i < m; i++)
//       { for (j = 0; j < n; j++)
//        {  printf("\t %d",diff[i][j]);
//        }
//           printf("\n");
//       }
//     }
//     else{
//         printf("order of matrix is invalide");
//     }
//     return 0;
// }