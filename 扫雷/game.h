#define _CRT_SECURE_NO_WARNINGS 1
#include <Stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
void Initboard(char checkerboard[ROWS][COLS],int rows, int cols, char tmp);//��ʼ������
void DisplayBoard(char checkerboard[ROWS][COLS], int row, int col);//��ӡ����
void SetBomb(char checkerboard[ROWS][COLS], int row, int col);//����
int FindBomb(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//����
int SumBomb(char mine[ROWS][COLS], int m, int n);//��Χ�׵ĸ���

