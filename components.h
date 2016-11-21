#pragma once
/*用于声明使用的结构体（程序中各部件）*/
#define X 500
#define Y 500
struct food
{
	int x;
	int y;
	int flag;
}food;
struct snake
{
	int x[X];
	int y[Y];
	int life;
	int direction;
	int node;
//	int speed;  //not decided yet
}snake;
