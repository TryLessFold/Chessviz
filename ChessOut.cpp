#include<cstdio>
void stdout_chess(int a[9][9], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0) printf("%5d", j);
			else if (j == 0) printf("%5c", i + 64);
			else printf("%5d", a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
}
