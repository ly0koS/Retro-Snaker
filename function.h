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
	i = rand() % 41;
	j = rand() % 26;
	fram[i][j] = 35;
	printf("%c", fram[i][j]);
}