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
	printf("������\n");
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
		printf("���Ӯ\n");
	else if (tmp == '#')
		printf("����Ӯ\n");
	else if(tmp=='draw')
		printf("ƽ��\n");
}
void main()
{
	srand((unsigned int)time(NULL));
	int input;
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
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}
		while (input);
}