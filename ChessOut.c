#include<stdio.h>

void stdout_chess(int a[8][8])
{
for (int cake = 0; cake < 5; cake++)
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
	printf("%2d ", a[i][j]);
        printf("\n");
    }
}