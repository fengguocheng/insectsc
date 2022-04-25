//①去掉最后4位数字（即取首数）：
//12345 / 10000 = 1.××××
//
//②去掉最后3位数字（即取前两位）：
//12345 / 1000 = 12.××××
//
//③去掉最后2位数字（即取前三位）：
//12345 / 100 = 123.××××
//
//④去掉最后1位数字（即取前四位）：
//12345 / 10 = 1234.××××
//————————————————
//第二类必知小知识点：取余 % ——逆向取数
//
//① 取尾数 ： 12345 % 10 = 5 ①取尾数 ：12345 \ % 10 = 5①取尾数：12345 % 10 = 5
//
//② 取后两位 ： 12345 % 100 = 45 ②取后两位：12345 \ % 100 = 45②取后两位：12345 % 100 = 45
//
//③ 取后三位 ： 12345 % 1000 = 345 ③取后三位：12345 \ % 1000 = 345③取后三位：12345 % 1000 = 345
//
//④ 取后四位 ： 12345 % 10000 = 2345 ④取后四位：12345 \ % 10000 = 2345④取后四位：12345 % 10000 = 2345
//————————————————


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
		printf("请输入坐标;>   (例1 2,第一行第二列)\n");
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
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	/*system("cls");*/
}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下\n");
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
