#include <stdio.h>
int main()
{
  int r1, r2, c1, c2, i, j, k, pro;

  printf("Please enter no of rows & coiumn of 1matrix:\n");
  scanf("%d %d", &r1, &c1);
  printf("Please enter no of rows & column of 2matrix:\n");
  scanf("%d %d", &r2, &c2);
  int x[r1][c1], y[r2][c2], mul[c1][r2];
  if (c1 == r2)
  {
    printf("multiplaction of matrix is posible:\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        printf("Please enter %d row of %d column element of 1st matrix:", i, j);
        scanf("%d", &x[i][j]);
      }
    }
    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("Please enter %d row of %d column element of 2nd matrix:", i, j);
        scanf("%d", &y[i][j]);
      }
    }
    printf("The element of x is:\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        printf("\t %d", x[i][j]);
      }
      printf("\n");
    }
    printf("The element of y is :\n");
    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("\t  %d", y[i][j]);
      }
      printf("\n");
    }

    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        pro = 0;
        for (k = 0; k < c1; k++) // muitipation logic
        {
          pro = pro + x[i][k] * y[k][j];
        }
        mul[i][j] = pro;
      }
    }
    printf("The product of matrix is:\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("\t %d", mul[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("order of matrix is invalide for product");
  }
  return 0;
}