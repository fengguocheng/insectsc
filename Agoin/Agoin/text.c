#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	printf("ɨ��\n");
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ����룬����������\n");
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}