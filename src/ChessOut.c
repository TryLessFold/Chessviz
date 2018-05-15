#include<stdio.h>

void stdout_chess(int **a)
{
  printf(" %2c %2c %2c %2c %2c %2c %2c %2c\n", 'a','b','c','d','e','f','g','h');
    for (int i = 0; i < 8; i++)
    {
      printf("%d",i+1);
        for (int j = 0; j < 8; j++)
	printf("%2d ", a[i][j]);
        printf("\n");
    }
}
