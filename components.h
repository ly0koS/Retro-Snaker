#pragma once
/*��������ʹ�õĽṹ�壨�����и�������*/
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
