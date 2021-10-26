/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() 
{
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j) 
    {
        scanf("%d", &a[i][j]);
    }
  } 

  //transpose
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j) 
    {
        transpose[j][i] = a[i][j];
    }
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  {
    for (int j = 0; j < r; ++j) 
    {
        printf("%d  ", transpose[i][j]);
        if (j == r - 1)
            printf("\n");
    }
  }
  return 0;
}