#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
int a[8][8];
void SwapMove(int &a, int &b)
{
    b = a;
    a = 0;
}
int CheckMove(int a[8][8], int y, int x, int y1, int x1) //0 - Невозможно походить, 1 - обычный ход, 2 - ход на врага, 3 - ход на союзника, 4-нет фигуры.
{
    int chmove, CheckPlace;
    if (a[y][x] != 0)
    {
	if (a[y][x] > 7) chmove = a[y][x] - 6;
	else chmove = a[y][x];
	switch (chmove)
	{
	    //пешка(белая(ый))
	case 1:
	    if (a[y1][x1] == 0) 
		if ((&a[y-1][x] == &a[y1][x1]) || (&a[y-2][x] == &a[y1][x1])) return 1; // normal move
	    if ((a[y][x] / 7 != a[y1][x1] / 7))
	    {
		if ((&a[y - 1][x + 1] == &a[y1][x1]) || (&a[y - 1][x - 1] == &a[y1][x1])) return 2;
	    } // attack
	    if ((&a[y-1][x+1] == &a[y1][x1]) || (&a[y-1][x-1] == &a[y1][x1])) return 3; // alliance
	    return 0;
	    break;
	    //слон(белая(ый))
	case 2:
	    break;

	    //конь(белая(ый))
	case 3:
	    break;

	    //ладья(белая(ый))
	case 4:
	    break;

	    //ферзь(белая(ый))
	case 5:
	    break;

	    //король(белая(ый))
	case 6:
	    break;

	    //пешка(черная(ый))
	case 7: 
	    if (a[y1][x1] == 0)
		if ((&a[y + 1][x] == &a[y1][x1]) || (&a[y + 2][x] == &a[y1][x1])) return 1; // normal move
	    if ((a[y][x] / 7 != a[y1][x1] / 7))
	    {
		if ((&a[y + 1][x + 1] == &a[y1][x1]) || (&a[y + 1][x - 1] == &a[y1][x1])) return 2;
	    } // attack
	    if ((&a[y + 1][x + 1] == &a[y1][x1]) || (&a[y + 1][x - 1] == &a[y1][x1])) return 3; // alliance
	    return 0;
	    break;
	}// Вывод массива должен производиться отдельной функцией в мейне, там будет цикл
    }
    else return 4;
}
int main()
{
    int i, j, i1, j1, turn, pass;
    /*описываем все элементы шахмотной доски где:
    1-пешка 4-ладья 3-конь 2-слон 5-ферзь 6-король
    знаком минус помеченна команда черных (не людей)*/
    a[7][0] = 4; a[6][0] = 1;
    a[7][1] = 3; a[6][1] = 1;
    a[7][2] = 2; a[6][2] = 1;
    a[7][3] = 6; a[6][3] = 1;
    a[7][4] = 5; a[6][4] = 1;
    a[7][5] = 2; a[6][5] = 1;
    a[7][6] = 3; a[6][6] = 1;
    a[7][7] = 4; a[6][7] = 1;

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
    for (int cake = 0; cake < 5; cake++)
    {
	for (i = 0; i < 8; i++)
	{
	    for (j = 0; j < 8; j++)
		printf("%2d ", a[i][j]);
	    printf("\n");
	}
	printf("\n");
	//123
	//ввод координат, где i и j	- кординаты из которых нужно походить, а i1 и j1 - координаты в которые нужно походить, да-да я знаю что можно было сделать лучше 
	printf("input i ");
	scanf("%d", &i);
	printf("input j ");
	scanf("%d", &j);

	printf("input i1 ");
	scanf("%d", &i1);
	printf("input j1 ");
	scanf("%d", &j1);
	printf("Pass = %d\n", CheckMove(a, i, j, i1, j1));
	pass = CheckMove(a, i, j, i1, j1);
	if (pass == 0) printf("Cake\n");
	if (pass == 3) printf("Cake\n");
	if (pass == 1) SwapMove(a[i][j],a[i1][j1]);
	if (pass == 2) SwapMove(a[i][j],a[i1][j1]);
	if (pass == 4) printf("Cakeislie\n");
	//вызов функции в которой описанны все случаи ходов, нет, я не переборщил засунов все в одну функцию p.s. смотреть выше в начале проге
	system("Pause");
	system("CLS");
    }
    return 0;
}