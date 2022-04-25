#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void game()
{
	char ret = 0;
	srand((unsigned int)time(NULL));
	char board [ROW][COL] = { 0 };//插入棋盘
	initboard(board, ROW, COL);//初始化棋盘
	display(board, ROW, COL);//显示棋盘
	while (1)
	{
		playermove(board, ROW, COL);
		display(board, ROW, COL); 
		/*system("cls");*/
		ret = Istrue(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);
		display(board, ROW, COL);
		
		ret=Istrue(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	switch (ret)
	{
	case '*':
		printf("人胜利");
		break;
	case '#':
		printf("电脑胜利");
		break;
	case 'Q':
		printf("和局");
		break;
	}
}
void menu()
{
	printf("*****************************\n");
	printf("****1.start        0.exit****\n");
	printf("*****************************\n");
}
void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	text();
	printf("游戏结束");
	return 0;
}