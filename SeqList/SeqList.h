#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* con;
	SLDateType size;//有效数字
	SLDateType capacity;//容量
}SL;
void SeqListInit(SL* ps);//顺序表初始化
void SeqListDisplay(SL* ps);//顺序表打印
void SeqListDistory(SL* ps);//顺序表销毁
void SeqListCheckCapacity(SL* ps);//增容顺序表
void SeqListPushBack(SL* ps);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPushFront(SL* ps);//头插
void SeqListPopFront(SL* ps);//头删
void SeqListFind(SL* ps);//顺序表查找
void SeqListInsert(SL* ps);//顺序表插入在指定位置的值
void SeqListErase(SL* ps);//顺序表删除在特定位置的值