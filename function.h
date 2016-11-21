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
	int i, j, iTemp;
	srand((unsigned)time(NULL));
	i = rand() % 40 + 1;
	j = rand() % 25 + 1;
	fram[i][j] = '#';
	if (i == 1)
	{
		iTemp = i + 5;
		for (; i < iTemp; i++)
			fram[i][j] = '#';
	}
	else if (j < 4 && i != 1)
	{
		iTemp = j + 5;
		for (; j < iTemp; j++)
			fram[i][j] = '#';
	}
	else if (i >19)
	{
		iTemp = i - 5;
		for (; i > iTemp; i--)
			fram[i][j] = '#';
	}
	else if (j >34)
	{
		iTemp = j - 5;
		for (; j > iTemp; j--)
			fram[i][j] = '#';
	}
	else
	{
		iTemp = j + 5;
		for (; j < iTemp; j++)
			fram[i][j] = '#';
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