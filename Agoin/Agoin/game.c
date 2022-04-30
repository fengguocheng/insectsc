#include"game.h"
void Initboard(char board[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <=row; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void Findboard(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入目标点坐标:>  (例:第一行第二列  1 2）");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board1[x][y] == '1')
			{
				printf("Congratulations!boom!");
				Displayboard(board1, ROW, COL);
				break;
			}
			else
			{
				int count = get_board1_count(board1,board2, x, y);
				board2[x][y] = count + '0';
				Displayboard(board2, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功");
		Displayboard(board2, ROW, COL);
	}
}
int get_board1_count(char board1[ROWS][COLS],char board2[ROWS][COLS], int x, int y)
{
	int z = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			z= board1[i][j]-'0'+z;
			if (z == 0)
			{
				board2[i][j] = '0';
			}
		}
	}
	return z;
}
