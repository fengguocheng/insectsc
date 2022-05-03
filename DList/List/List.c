#include "List.h"
Dlist* BuyDlist(DlistDate x)
{
	Dlist* newnode = (Dlist*)malloc(sizeof(Dlist));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
Dlist* InitDlist(Dlist* phead)
{
	phead = (Dlist*)malloc(sizeof(Dlist));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void PushBack(Dlist* phead, DlistDate x)//尾插
{
	assert(phead);
	Dlist* newnode = BuyDlist(x);
	Dlist* tail = phead->prev;
	tail->next = newnode;
	phead->next = newnode;
	newnode->next = tail;
	newnode->prev=phead->next;
}
void PopBack(Dlist* phead, DlistDate x)//尾删
{
	assert(phead);
	Dlist* tail = phead->prev;
	if (tail != phead)
	{
		tail->prev->next = phead;
		tail->next = phead;
		phead->next = tail->prev;
		phead->prev = tail->prev;
	}
	else
	{
		return;
	}
	//或者
	InsertDlist(phead->prev, 0);
}
void PushFront(Dlist* phead, DlistDate x)//头插
{
	Dlist* newnode = BuyDlist(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next = newnode;
	
}
void PopFront(Dlist* phead, DlistDate x)//头删
{
	assert(phead);
	Dlist* newnode = phead->next;
	if (newnode != phead)
	{
		return;
	}
	else
	{
		newnode->next->next = phead;
		phead->next = newnode->next;
		free(newnode);
	}
	//或者
	InsertDlist(phead->next,0);
}
void InitDlist(Dlist* phead)//打印
{
	Dlist* tail = phead->next;
	while (tail)
	{
		if (tail == phead)
			return;
		else
			printf("%d->", tail->data);
			tail = tail->next;
	}
}
Dlist* FindDlist(Dlist* phead, DlistDate x)//查找
{
	assert(phead);
	Dlist* cur = phead->next;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
}
void InsertDlist(Dlist* pos, DlistDate x)//在pos位置前插
{
	Dlist* newnode = BuyDlist(x);
	Dlist* cur = pos->prev;
	newnode->next = pos;
	newnode->prev = cur;
	cur->next = newnode;
}
void EraseDlist(Dlist* pos)//删除pos位置处
{
	Dlist* cur = pos->prev;
	cur->next = pos->next;
	pos->prev = cur->next;
	free(pos);
}
void DistoryDlist(Dlist* phead)//删除
{
	assert(phead);
	Dlist* cur = phead->next;
	while (cur)
	{
		while (cur != phead)
		{
			Dlist* next = cur->next;
			free(cur);
			cur =next;
		}
	}
	free(phead);
	phead = NULL;
}