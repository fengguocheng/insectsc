#define _CRT_SECURE_NO_WARNINGS 1
#include <Stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
void Initboard(char checkerboard[ROWS][COLS],int rows, int cols, char tmp);//初始化棋盘
void DisplayBoard(char checkerboard[ROWS][COLS], int row, int col);//打印棋盘
void SetBomb(char checkerboard[ROWS][COLS], int row, int col);//布雷
int FindBomb(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//排雷
int SumBomb(char mine[ROWS][COLS], int m, int n);//周围雷的个数

