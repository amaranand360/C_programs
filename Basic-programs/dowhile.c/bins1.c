#include<stdio.h>
int main(){
    
    int i,j,k,m,n,o,p;
    int x[m][n],y[o][p];
    int add;
    printf("Enter the row and column of 1st martrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the row and column of 2nd martrix\n");
    scanf("%d %d",&o,&p);
    if (n==o)
    {   int product[n][o];
        printf("Matrix product is exist\n");

     for(i=0;i<m;i++)
     { for(j=0;j<n;j++)
       { 
        printf(" Enter for 1st matrix %d row %d column elements:",i,j);
         scanf("%d",&x[i][j]);
       }
     }
       for(i=0;i<o;i++)
     { for(j=0;j<p;j++)
       { printf("Enter for 2nd matrix %d row %d column elements:",i,j);
         scanf("%d",&y[i][j]);
       }
     }
     for ( i = 0; i <m; i++)
      { for ( j = 0; j < p; j++)
       {   add = 0;
         for ( k = 0; k < p; k++)
        {
           add+= x[i][k]*y[k][j];
        }
        product[i][j] = add;  
       }
     }
      printf("The product of matrix is:\n");
      for ( i = 0; i < n; i++)
      { for ( j = 0; j < n; j++)
      {
        printf("\t %d",product[i][j]);
      }
      printf("\n");
      } 

    }
    else{
        printf("Matix multiplication does not exist\n ");
    }
    return 0;
}