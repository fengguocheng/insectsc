#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void game()
{
	char ret = 0;
	srand((unsigned int)time(NULL));
	char board [ROW][COL] = { 0 };//��������
	initboard(board, ROW, COL);//��ʼ������
	display(board, ROW, COL);//��ʾ����
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
		printf("��ʤ��");
		break;
	case '#':
		printf("����ʤ��");
		break;
	case 'Q':
		printf("�;�");
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
		printf("��ѡ��>:");
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
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	text();
	printf("��Ϸ����");
	return 0;
}