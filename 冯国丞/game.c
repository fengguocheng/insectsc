//��ȥ�����4λ���֣���ȡ��������
//12345 / 10000 = 1.��������
//
//��ȥ�����3λ���֣���ȡǰ��λ����
//12345 / 1000 = 12.��������
//
//��ȥ�����2λ���֣���ȡǰ��λ����
//12345 / 100 = 123.��������
//
//��ȥ�����1λ���֣���ȡǰ��λ����
//12345 / 10 = 1234.��������
//��������������������������������
//�ڶ����֪С֪ʶ�㣺ȡ�� % ��������ȡ��
//
//�� ȡβ�� �� 12345 % 10 = 5 ��ȡβ�� ��12345 \ % 10 = 5��ȡβ����12345 % 10 = 5
//
//�� ȡ����λ �� 12345 % 100 = 45 ��ȡ����λ��12345 \ % 100 = 45��ȡ����λ��12345 % 100 = 45
//
//�� ȡ����λ �� 12345 % 1000 = 345 ��ȡ����λ��12345 \ % 1000 = 345��ȡ����λ��12345 % 1000 = 345
//
//�� ȡ����λ �� 12345 % 10000 = 2345 ��ȡ����λ��12345 \ % 10000 = 2345��ȡ����λ��12345 % 10000 = 2345
//��������������������������������


#include"game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
			{
				printf("|");
			}
		}
			printf("\n");
			if (i < col - 1)
			{
				for (int j = 0; j < col; j++)
				{
					printf("---");
					if(j<col-1)
					printf("|");
				}
			}
			printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������;>   (��1 2,��һ�еڶ���)\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	/*system("cls");*/
}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Isdraw(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Istrue(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
			{
				return board[0][j];
			}
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][0];
			}
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			{
				return board[0][0];
			}
			if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
			{
				return board[2][0];
			}
			if (1 == Isdraw(board, row, col))
			{
				return  'Q';
			}
			else
				return 'C';
			/*if (board[i][j] != ' ')
			{
				return 'Q';
			}
				return 'C';*/
		}
	}
}
