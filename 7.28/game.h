#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����
void Playeract(char board[ROW][COL], int row, int col,char tmp);//��Ҳ���
void Desktopact(char board[ROW][COL], int row, int col,char tmp);//��Ҳ���
char Iswin(char board[ROW][COL], int row, int col);//�ж���Ӯ������ֵΪ    *���Ӯ    #����Ӯ     drawƽ��      con����
int Isfull(char board[ROW][COL], int row, int col);//�ж������Ƿ��ȱ
