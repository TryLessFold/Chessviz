#include<stdio.h>
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
void FillChess(int a[9][9], int n)
{
for(int i=1; i<n; i++)
for(int j=1; j<n; j++)
{
if ((i==2)||(i==7)) a[i][j]=1;
else if ((i==1)||(i==8))
{
if ((j==8)||(j==1)) a[i][j]=2;
if ((j==7)||(j==2)) a[i][j]=3;
if ((j==6)||(j==3)) a[i][j]=4;
if ((j==5)&&(i==8)){ a[i][j]=6; a[i][j-1]=5;}
if ((j==5)&&(i==1)){a[i][j]=5; a[i][j-1]=6;}
}
else a[i][j]=0;
}
}

int main()
{
int a[9][9],n=9;
FillChess(a,n);
stdout_chess(a, n);
return 0;
}