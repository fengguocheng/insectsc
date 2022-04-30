#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void Initboard(char board[ROWS][COLS], int row, int col, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col );
void Findboard(char board1[ROWS][COLS],char board2[ROWS][COLS], int row, int col);
int get_board1_count(char board1[ROWS][COLS], char board2[ROWS][COLS], int x, int y);
