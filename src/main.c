#include<stdlib.h>
#include<stdio.h>
#include "ChessOut.h"
//#include <iostream>
#include "ChessCheck.h"

//using namespace std;

int CheckMove(int a[8][8], int y, int x, int y1, int x1);
void SwapMove(int *k, int *r)
{
    *r = *k;
    *k = 0;
}

int main()
{
  int i, i1, turn, pass, a[8][8];
  char j, j1;
  //a = new int*[8];
 // for(int i =0;i<8;i++)
   //a[i]= new int[8];
    /*описываем все элементы шахмотной доски где:
    1-пешка 4-ладья 3-конь 2-слон 5-ферзь 6-король
    знаком минус помеченна команда черных (не людей)*/
    a[7][0] = 2; a[6][0] = 1;
    a[7][1] = 3; a[6][1] = 1;
    a[7][2] = 4; a[6][2] = 1;
    a[7][3] = 6; a[6][3] = 1;
    a[7][4] = 5; a[6][4] = 1;
    a[7][5] = 4; a[6][5] = 1;
    a[7][6] = 3; a[6][6] = 1;
    a[7][7] = 2; a[6][7] = 1;

    a[2][0] = 0; a[3][0] = 0;
    a[2][1] = 0; a[3][1] = 0;
    a[2][2] = 0; a[3][2] = 0;
    a[2][3] = 0; a[3][3] = 0;
    a[2][4] = 0; a[3][4] = 0;
    a[2][5] = 0; a[3][5] = 0;
    a[2][6] = 0; a[3][6] = 0;
    a[2][7] = 0; a[3][7] = 0;

    a[4][0] = 0; a[5][0] = 0;
    a[4][1] = 0; a[5][1] = 0;
    a[4][2] = 0; a[5][2] = 0;
    a[4][3] = 0; a[5][3] = 0;
    a[4][4] = 0; a[5][4] = 0;
    a[4][5] = 0; a[5][5] = 0;
    a[4][6] = 0; a[5][6] = 0;
    a[4][7] = 0; a[5][7] = 0;

    a[0][0] = 8; a[1][0] = 7;
    a[0][1] = 9; a[1][1] = 7;
    a[0][2] = 10; a[1][2] = 7;
    a[0][3] = 11; a[1][3] = 7;
    a[0][4] = 12; a[1][4] = 7;
    a[0][5] = 10; a[1][5] = 7;
    a[0][6] = 9; a[1][6] = 7;
    a[0][7] = 8; a[1][7] = 7;

    //вывод первоначальной доски, вот такой скучный комментарий 
    while(1)
        {
        stdout_chess(a);
	printf("\n");
	//123
	//ввод координат, где i и j	- кординаты из которых нужно походить, а i1 и j1 - координаты в которые нужно походить, да-да я знаю что можно было сделать лучше 
       	printf("input number: ");
		scanf("%d", &i);
	//cin >> i; 
	printf("input char: ");
	//cin >> j;
		scanf("%c", &j);
	printf("input number to: ");
	//cin>>i1;
		scanf("%d", &i1);
	printf("input char to: ");
	//cin>>j1;
		scanf("%c", &j1);
	if (i==0) return 0;
	i--;
	i1--;
        j-='a';
	j1-='a';
        pass = 0;
	printf("%d\n%d\n",j, j1);
	if ((i>=0)&&(i<8)&&(j>=0)&&(j<8)&&(i1>=0)&&(i1<8)&&(j1>=0)&&(j1<8))
	{
	printf("Pass = %d\n", CheckMove(a, i,j, i1, j1));
	pass = CheckMove(a, i, j, i1, j1);
	}	
	if (pass == 0) printf("Cake\n");
	if (pass == 3) printf("Cake\n");
	if (pass == 1)
	  {
	    SwapMove(&a[i][j], &a[i1][j1]);
	  }
	if (pass == 2)
	  {
	    SwapMove(&a[i][j], &a[i1][j1]);
	  }
	if (pass == 4) printf("Cakeislie\n");
	//вызов функции в которой описанны все случаи ходов, нет, я не переборщил засунов все в одну функцию p.s. смотреть выше в начале проге
	system("Pause");
	system("CLS");
    }
    return 0;
}
