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
void PushBack(Dlist* phead, DlistDate x)//β��
{
	assert(phead);
	Dlist* newnode = BuyDlist(x);
	Dlist* tail = phead->prev;
	tail->next = newnode;
	phead->next = newnode;
	newnode->next = tail;
	newnode->prev=phead->next;
}
void PopBack(Dlist* phead, DlistDate x)//βɾ
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
	//����
	InsertDlist(phead->prev, 0);
}
void PushFront(Dlist* phead, DlistDate x)//ͷ��
{
	Dlist* newnode = BuyDlist(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next = newnode;
	
}
void PopFront(Dlist* phead, DlistDate x)//ͷɾ
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
	//����
	InsertDlist(phead->next,0);
}
void InitDlist(Dlist* phead)//��ӡ
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
Dlist* FindDlist(Dlist* phead, DlistDate x)//����
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
void InsertDlist(Dlist* pos, DlistDate x)//��posλ��ǰ��
{
	Dlist* newnode = BuyDlist(x);
	Dlist* cur = pos->prev;
	newnode->next = pos;
	newnode->prev = cur;
	cur->next = newnode;
}
void EraseDlist(Dlist* pos)//ɾ��posλ�ô�
{
	Dlist* cur = pos->prev;
	cur->next = pos->next;
	pos->prev = cur->next;
	free(pos);
}
void DistoryDlist(Dlist* phead)//ɾ��
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