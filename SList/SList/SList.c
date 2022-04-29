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
SL* SListFind(SL* plist)//返回指定数字的链表地址
{
	int num = 0;
	printf("输入要查找的数字:");
	scanf("%d", &num);
	SL* cur = plist;
	while (cur)
	{
		if (cur->date == num)
		{
			static int i= 1;
			while (cur)
			{
				printf("第%d个%d数字节点在 %p\n", i++, cur->date, cur);
				cur = SListFind(cur->next);
			}
			return cur;
		}
		else
		{
			cur = cur->next;
		}
		return NULL;
	}
}
void SListInsertnumPrev(SL** plist, SL* pos)//插入指定位置前的值
{
	SL* newnode = SListBuild(*plist);
	SL* pre = *plist;
	if (pos == *plist)
	{
		*plist = newnode;
		newnode->next = *plist;
	}
	while (pre->next != pos)
	{
		pre = pre->next;
	}
	pre->next = newnode;
	newnode->next = pos;
}
void SListErase(SL** plist,SL* pos)//删除指定位置的值
{
	SL* pre = *plist;
	if (*plist == pos)
	{
		SL* ps = *plist;
		*plist = (*plist)->next;
		free(ps);
	}
	while (pre->next != pos)
	{
		pre = pre->next;
	}
	pre->next = pos->next;
	free(pos);
	pos = NULL;
}
void SListDistory(SL** plist)//销毁链表
{
	SL* ps = *plist;
	while (ps)
	{
		SL* cur = ps->next;
		free(ps);
		ps = cur;
	}
	ps = NULL;
}
void SListInsertnumAfter(SL** plist, SL* pos)//插入指定位置后的值
{
	SL* newnode = SListBuild(*plist);
	newnode->next = pos->next;
	pos->next = newnode;
}
