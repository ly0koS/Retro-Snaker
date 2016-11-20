#pragma once
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#define MAX_WIDE 50
#define MAX_LENTH 20
void snake()
{
	int len;
	int body[MAX_WIDE*MAX_LENTH];
}
void draw()
{
	char fram[50][50];
	int i,j;
	for (i = 0, j = 0; i < 50 && j < 50; i++, j++)
	{
		if (i == 0 && j < 50||i==49&&j<50||i<50&&j==0||j==49&&i<50)
			fram[i][j] = '¡ö';
		if (!(i == 0 && j < 50 || i == 49 && j < 50 || i < 50 && j == 0 || j == 49 && i < 50))
		{
			fram[i][j] = ' ';
		}
	}
	for (i = 0, j = 0; i < 50 && j < 50; i++, j++)
	{
		
	}
}