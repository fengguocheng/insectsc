#include "game.h"
void menu()
{
	printf("*************************************\n");
	printf("*************  1. play  *************\n");
	printf("*************  0. exit  *************\n");
	printf("*************************************\n");
}
void game()
{
	printf("三子棋\n");
	char board[ROW][COL] = { 0 };
	char tmp=0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		Playeract(board, ROW, COL, '*');
		tmp=Iswin(board, ROW, COL);
		if (tmp != 'c')
			break;
		Desktopact(board, ROW, COL, '#');
		tmp=Iswin(board, ROW, COL);
		if (tmp != 'c')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (tmp == '*')
		printf("玩家赢\n");
	else if (tmp == '#')
		printf("电脑赢\n");
	else if(tmp=='draw')
		printf("平局\n");
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
				break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
		while (input);
}