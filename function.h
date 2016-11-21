#pragma once
#include"components.h"
#include"struct.h"
#include<stdlib.h>
#include<time.h>
void print_snake();
void eat_food();
void direction(char drx);
void set_grade();
void print_snake()
{
	int i, j, iTemp,iX,iY;
	srand((unsigned)time(NULL));
	i = rand() % 41 + 1;
	j = rand() % 26 + 1;
	fram[i][j] = 35;
	iX = i;
	iY = j;
	if (iX == 1)
	{
		iTemp = iX + 5;
		for (; iX < iTemp; iX++)
			fram[iX][iY] = '#';
	}
	else if (iY == 1 && i != 1)
	{
		iTemp = iY + 5;
		for (; iY < iTemp; iY--)
			fram[iX][iY] = '#';
	}
	else if (iX == 23)
	{
		iTemp = iX - 5;
		for (; iX > iTemp; iX--)
			fram[iX][iY] = '#';
	}
	else if (iY == 38)
	{
		iTemp = iY - 5;
		for (; iY > iTemp; iY--)
			fram[iX][iY] = '#';
	}
	else
	{
		for (; iX > iX - 5; iX--)
			fram[iX][iY] = '#';
	}
}
void draw()
{
	int i, j;
	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 40; j++)
		{
			printf("%c", fram[i][j]);
		}
		printf("\n");
	}
}