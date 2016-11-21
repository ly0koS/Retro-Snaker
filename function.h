#pragma once
#include"components.h"
#include"struct.h"
#include<stdlib.h>
void print_snake();
void eat_food();
void direction(char drx);
void set_grade();
void print_snake()
{
	int i, j;
	i = rand() % 41 + 1;
	j = rand() % 26 + 1;
	fram[i][j] = 35;
	if (i == 1)
	{
		for (; i < i + 5; i++)
			fram[i][j] = 35;
	}
	else if (j == 1 && i != 1)
	{
		for (; j < j + 5; j--)
			fram[i][j] = 35;
	}
	else if (i == 23)
	{
		for (; i > i - 5; i--)
			fram[i][j] = 35;
	}
	else if (j == 38)
	{
		for (; j > j - 5; j--)
			fram[i][j] = 35;
	}
	else
	{
		for (; i > i - 5; i--)
			fram[i][j] = 35;
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