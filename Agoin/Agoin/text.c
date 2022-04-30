#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	printf("扫雷\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(show, ROW, COL);
	
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	Findboard(mine, show, ROW, COL);
}
void menu()
{
	printf("********************************\n");
	printf("*********    1.play    *********\n");
	printf("*********    0.exit    *********\n");
	printf("********************************\n");
}
void text()
{
	int input = 0;
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
			printf("退出游戏\n");
			break;
		default:
			printf("非法输入，请重新输入\n");
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}