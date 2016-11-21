#pragma once
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
	char fram[25][40];
void draw()
{
	int i,j;
	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 40; j++)
		{
		if (i == 0 && j < 40|| i == 24 && j < 40 || i < 25 && j == 0 || j == 39 && i < 25)
			fram[i][j] = 64;
		if (!(i == 0 && j < 40 || i == 24 && j < 40 || i < 25 && j == 0 || j == 39 && i < 25))
			fram[i][j] = ' ';
		}
	}
	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 40; j++)
		{
			printf("%c", fram[i][j]);
		}
		printf("\n");
	}
}