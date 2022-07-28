#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘
void Playeract(char board[ROW][COL], int row, int col,char tmp);//玩家操作
void Desktopact(char board[ROW][COL], int row, int col,char tmp);//玩家操作
char Iswin(char board[ROW][COL], int row, int col);//判断输赢，返回值为    *玩家赢    #电脑赢     draw平局      con继续
int Isfull(char board[ROW][COL], int row, int col);//判断棋盘是否空缺
