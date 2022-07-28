#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("___");
				if(j<col-1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void Playeract(char board[ROW][COL], int row, int col,char tmp)
{
	int m, n;
	while(1)
	{
		printf("��������:>");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (board[m-1][n-1] == ' ')
			{
				board[m-1][n-1] = tmp;
				break;
			}
			else
				printf("�������ѱ�ռ��\n");
		}
		else
			printf("����Ƿ�\n");			
	}
}
void Desktopact(char board[ROW][COL], int row, int col, char tmp)
{
	printf("��������:>\n");
	while (1)
	{
		int m = rand() % row;
		int n = rand() % col;
		if (board[m][n] == ' ')
		{
			board[m][n] = tmp;
			break;
		}
	}
}
int Isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j;
	//��
	for (i = 0; i < row; i++)
	{
		int sum = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == '*')
			{
				sum++;//������붨��count���Խ���������һȦ��������ÿһ���жϹ������漰��һ����ʼ�������⣬����Ȥ����ʵ��
			}
		}
		if (sum == col - 1)
			return board[i][j];
	}
	//��
	for (i = 0; i < col; i++)///�������̷�ת90��,��һ�е��������ڱ���ÿһ��
	{
		int sum = 0;
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == board[j+1][i] && board[j][i] == '*')
			{
				sum++;
			}
		}
		if (sum == col - 1)
			return board[j][i];
	}
	//�Խ���
	int sum_x = 0;
	int sum_y = 0;
	for (i = 0; i < row - 1; i++)
	{		
		if (board[i][i] == board[i + 1][j + 1] && board[i][j] != ' ')
			sum_x++;
		else if (board[row-i-1][i] == board[row - i - 2][i+1] && board[row - i - 1][i] != ' ')
			sum_y++;
	}
	if (sum_x == row - 1)
		return board[i][j];
	if (sum_y == row - 1)
		return board[row - i - 1][i];
	if (Isfull(board, row, col) == 1)
		return 'd';
		return 'c';
}


