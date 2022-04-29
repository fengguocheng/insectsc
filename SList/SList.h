#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef int SListDate;
typedef struct SList
{
	SListDate date;
	struct SList* next;
}SL;
void SListPrint(SL* ps);//打印链表
void SListPushBack(SL** plist);//链表尾插
void SListPushFront(SL** plist);//链表头插
void SListPopBack(SL** plist);//链表尾删
void SListPopFront(SL** plist);//链表头删
void SListErase(SL** plist);//删除指定位置的值
void SListFind(SL** plist);//删除指定位置的值
void SListInsertnum(SL** plist);//删除指定位置的值