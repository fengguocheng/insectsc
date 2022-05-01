#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int DlistDate;
typedef struct Dlist
{
	DlistDate data;
	struct Dlist* next;
	struct Dlist* prev;
}Dlist;
Dlist* InitDlist(Dlist* phead);
Dlist* BuyDlist(DlistDate x);
void PushBack(Dlist* phead, DlistDate x);//尾插
void PopBack(Dlist* phead, DlistDate x);//尾删
void PushFront(Dlist* phead, DlistDate x);//头插
void PopFront(Dlist* phead, DlistDate x);//头删
void InsertDlist(Dlist* phead, DlistDate x);//前插
void EraseDlist(Dlist* pos);//删除pos位置处
Dlist* FindDlist(Dlist* phead, DlistDate x);//查找
Dlist* InitDlist(Dlist* phead);//打印

