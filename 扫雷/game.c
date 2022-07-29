#include "game.h"
void Initboard(char checkerboard[ROWS][COLS], int rows, int cols, char tmp)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			checkerboard[i][j] = tmp;
		}
	}
}
void DisplayBoard(char checkerboard[ROWS][COLS], int row, int col)
{
	int i, j;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)//����Ҫע��
		{
			printf("%c ", checkerboard[i][j]);
		}
		printf("\n");
	}
}
void SetBomb(char checkerboard[ROWS][COLS], int row, int col)
{
	int m, n;
	int count = COUNT;
	while (count)
	{
		m = rand() % row + 1;
		n = rand() % row + 1;
		if (checkerboard[m][n] == '0')
		{
			checkerboard[m][n] = '1';
			count--;
		}
	}
}
int SumBomb(char mine[ROWS][COLS],int m,int n)
{
	int i, j;
	int sum = 0;
	for (i = m - 1; i <= m + 1; i++)
	{
		for (j = n - 1; j <= n + 1; j++)
		{
			sum += mine[i][j] - '0';
		}
	}
	return sum;
}
int FindBomb(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int m, n;
	int win = 0;
	while (win<row*col-COUNT)
	{
		system("cls");
		DisplayBoard(show, ROW, COL);
		printf("����������:>");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (show[m][n] == '*')
			{
				if (mine[m][n] == '1')
				{
					printf("��ϲ�㣬�㱻ը����\n");
					DisplayBoard(show, ROW, COL);
					return 0;
				}
				else
				{
					int count = SumBomb(mine, m, n);
					show[m][n] = count + '0';
					win++;
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("���������Ų�\n");
				break;
			}
		}
		else
		{
			printf("����Ƿ�\n");
			break;
		}
	}
	if (win == row * col - COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(show, ROW, COL);
		return 1;
	}
}
//�ݹ�����
void Findextend(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int sum = SumBomb(mine, x, y);
	if (sum == 0)
	{
		show[x][y] = ' ';//���������հ�
		int i, j;
		for (i = x - 1; i <= x + 1 ; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i == x && j == y)//λ�������ܽ���ݹ飬������ѭ��
				{
					continue;
				}
				if (i > 0 && i <= ROW && j > 0 && j <= COL && mine[i][j] != '1' && show[i][j] == '*')//�������������һ��ǳ�ʼ���ַ�������ݹ�
				{
					Findextend(mine, show, i, j);//�ݹ�
				}
			}
		}
	}
	else
		show[x][y] = sum + '0';
}