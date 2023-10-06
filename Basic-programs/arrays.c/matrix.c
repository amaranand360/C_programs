/* matrix.c add, sub, trans,multiplcation.using function
 */
#include <stdio.h>

#define ROW 3
#define COL 3

void inputmatrix(int mat[ROW][COL])
{
  int i, j;
  for (i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}

void printmatrix(int mat[ROW][COL])
{
  int i, j;
  for (i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}

void matrixsum(int mat1[ROW][COL], int mat2[ROW][COL], int sum[ROW][COL],int diff[ROW][COL])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      sum[i][j] = mat1[i][j] + mat2[i][j];
      diff[i][j] = mat1[i][j] - mat2[i][j];

    }
  }
}

// void matrixdiff(int mat1[ROW][COL], int mat2[ROW][COL], int diff[ROW][COL])
// {
//   int i, j;
//   for (i = 0; i < 3; i++)
//   {
//     for (j = 0; j < 3; j++)
//     {
      
//       diff[i][j] = mat1[i][j] - mat2[i][j];
//     }
//   }
// }

void matrixtrans1(int mat[ROW][COL],int trans[ROW][COL])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      trans[i][j] = mat[j][i];
    }
  }
}

int main()
{
  int mat1[ROW][COL];
  int mat2[ROW][COL];
  int sum[ROW][COL];
  int diff[ROW][COL],trans1[ROW][COL],trans2[ROW][COL];
  //  int p[3][3];
  //  int add = 0;

  printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
  inputmatrix(mat1);

  printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
  inputmatrix(mat2);

  printf("The element of 1st matrix:\n");
  printmatrix(mat1);

  printf("The element of 2nd matrix:\n");
  printmatrix(mat2);

  matrixsum(mat1, mat2, sum,diff);
  printf("SUM of both matrices is : \n");
  printmatrix(sum);

  printf("Diffrence of both matrices is : \n");
  printmatrix(diff);

  matrixtrans(mat1,trans1);
  printf("Transpose of 1st matrices is : \n");
  printmatrix(trans1);

  matrixtrans(mat2,trans2);
  printf("Transpose of 2st matrices is : \n");
  printmatrix(trans2);
  return 0;
}



//     for(i=0;i<3;i++)
//  { for(j=0;j<3;j++)
//    {
//     sum[i][j] = x[i][j] + y[i][j];
//     diff[i][j] = x[i][j] - y[i][j];
//     trans1[i][j] = x[j][i];
//     trans2[i][j] = y[j][i];
//    }
//  }
//    printf(" \n the element of resultant matrix\n");
//  for( i = 0; i < 3; i++)
//  { for( j = 0; j <3; j++)
//    {
//     printf(" \t %d ",sum[i][j]);
//    }  printf("\n");
//  }
//  printf(" \n the element of subtrated matrix\n");
//  for( i = 0; i < 3; i++)
//  {  for ( j = 0; j <3; j++)
//   {
//     printf(" \t %d ",diff[i][j]);
//   }   printf("\n");
//  }
//  printf("\n tne  element of transport of 1st matrix is:\n");
//  for( i = 0; i < 3; i++)
//  {
//     for ( j = 0; j <3; j++)
//   {
//     printf(" \t %d ",trans1[i][j]);
//   }  printf("\n");
//  }
//  printf("\n tne element of transport of 2nd matrix is:\n");
//  for( i = 0; i < 3; i++)
//  { for( j = 0; j <3; j++)
//   {
//     printf(" \t %d ",trans2[i][j]);
//   }  printf("\n");
//       }

//   printf("The product of matrix is:\n");
//   for ( i = 0; i < 3; i++)
//   { for ( j = 0; j < 3; j++)
//   {
//     printf("\t %d",p[i][j]);
//   }
//   printf("\n");
//   }

//      for ( i = 0; i <3; i++)
//      { for ( j = 0; i < 3; j++)
//           add = 0;
//       { for ( k = 0; i < 3; k++)
//        {
//        add = add +(x[i][k]*y[k][j]);
//        }
//         product[i][j] = add;
//       }
//      }
//       printf("The product of matrix is:");
//       for ( i = 0; i < 3; i++)
//       { for ( j = 0; j < 3; j++)
//       {
//         printf("\t %d",product[i][j]);
//       }
//       printf("\n");
//       }

//   return 0;
// }
