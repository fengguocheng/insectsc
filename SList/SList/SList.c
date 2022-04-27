#include "SList.h"
SL* SListBuild(SL* ps)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	int num = 0;
	printf("输入要插入的数字:");
	scanf("%d", &num);
	newnode->date = num;
	newnode->next = NULL;
}
void SListPrint(SL* ps)//打印链表
{
	SL* plist = ps;
	while (plist != NULL)
	{
		printf("%d->", plist->date);
		plist = plist->next;
	}
}
void SListPushBack(SL** plist)//链表尾插
{
	SL* newnode=SListBuild(*plist);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{
		SL* ps = *plist;
		while (ps->next != NULL)
		{
			ps = ps->next;
		}
		ps->next = newnode;
	}	
}
void SListPushFront(SL** plist)//链表头插
{
	SL* newnode = SListBuild(*plist);
	newnode->next = *plist;
	*plist = newnode;
}
void SListPopBack(SL** plist)//链表尾删
{
	if (*plist == NULL)
	{
		printf("链表为空，无可删数据");
		return;
	}
	if ((*plist)->next == NULL)
	{
		free(*plist);
		*plist == NULL;
	}
	else
	{
		SL* pre = NULL;
		SL* ps = *plist;
		while (ps->next->next)
		{
			pre = ps;
			ps = ps->next;
		}
		free(ps);
		ps = NULL;
		pre->next = NULL;
	}
}
void SListPopFront(SL** plist)//链表头删
{
	if ((*plist) == NULL)
	{
		printf("无可删数据");
		return;
	}
	else
	{
		SL* ps = *plist;
		*plist = (*plist)->next;
		free(ps);
	}
}
