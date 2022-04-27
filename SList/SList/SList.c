#include "SList.h"
SL* SListBuild(SL* ps)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	int num = 0;
	printf("����Ҫ���������:");
	scanf("%d", &num);
	newnode->date = num;
	newnode->next = NULL;
}
void SListPrint(SL* ps)//��ӡ����
{
	SL* plist = ps;
	while (plist != NULL)
	{
		printf("%d->", plist->date);
		plist = plist->next;
	}
}
void SListPushBack(SL** plist)//����β��
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
void SListPushFront(SL** plist)//����ͷ��
{
	SL* newnode = SListBuild(*plist);
	newnode->next = *plist;
	*plist = newnode;
}
void SListPopBack(SL** plist)//����βɾ
{
	if (*plist == NULL)
	{
		printf("����Ϊ�գ��޿�ɾ����");
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
void SListPopFront(SL** plist)//����ͷɾ
{
	if ((*plist) == NULL)
	{
		printf("�޿�ɾ����");
		return;
	}
	else
	{
		SL* ps = *plist;
		*plist = (*plist)->next;
		free(ps);
	}
}
