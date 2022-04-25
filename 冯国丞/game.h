#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);
void display(char board[ROW][COL], int row, int col);
void menu();
void text();
void game();
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char Istrue(char board[ROW][COL], int row, int col);
int Isdraw(char board[ROW][COL], int row, int col);
//四种状态
// - *为玩家赢;
// - #为电脑赢;
// - Q为和局;
// - C为继续;