#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("***********  1. play  ***********\n");
	printf("***********  0. exit  ***********\n");
	printf("*********************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	SetBomb(mine, ROW, COL);
	while (1)
	{
		int ret=FindBomb(mine, show, ROW, COL);
		if (ret == 1 || ret == 0)
			break;
	}
}
void main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("continue?\n");
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入非法，重新输入\n");
		}
	}
		while (input);
}