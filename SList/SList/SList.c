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
SL* SListFind(SL* plist)//����ָ�����ֵ������ַ
{
	int num = 0;
	printf("����Ҫ���ҵ�����:");
	scanf("%d", &num);
	SL* cur = plist;
	while (cur)
	{
		if (cur->date == num)
		{
			static int i= 1;
			while (cur)
			{
				printf("��%d��%d���ֽڵ��� %p\n", i++, cur->date, cur);
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
void SListInsertnumPrev(SL** plist, SL* pos)//����ָ��λ��ǰ��ֵ
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
void SListErase(SL** plist,SL* pos)//ɾ��ָ��λ�õ�ֵ
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
void SListDistory(SL** plist)//��������
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
void SListInsertnumAfter(SL** plist, SL* pos)//����ָ��λ�ú��ֵ
{
	SL* newnode = SListBuild(*plist);
	newnode->next = pos->next;
	pos->next = newnode;
}
