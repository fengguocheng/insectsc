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
		printf("输入坐标:>");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (board[m-1][n-1] == ' ')
			{
				board[m-1][n-1] = tmp;
				break;
			}
			else
				printf("该坐标已被占用\n");
		}
		else
			printf("坐标非法\n");			
	}
}
void Desktopact(char board[ROW][COL], int row, int col, char tmp)
{
	printf("电脑下棋:>\n");
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
	//行
	for (i = 0; i < row; i++)
	{
		int sum = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == '*')
			{
				sum++;//如果不想定义count可以将棋盘扩大一圈，但这在每一个判断过程中涉及到一个初始化的问题，感兴趣可以实现
			}
		}
		if (sum == col - 1)
			return board[i][j];
	}
	//列
	for (i = 0; i < col; i++)///想象将棋盘翻转90度,这一行的意义在于遍历每一列
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
	//对角线
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


