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
void PushBack(Dlist* phead, DlistDate x);//β��
void PopBack(Dlist* phead, DlistDate x);//βɾ
void PushFront(Dlist* phead, DlistDate x);//ͷ��
void PopFront(Dlist* phead, DlistDate x);//ͷɾ
void InsertDlist(Dlist* phead, DlistDate x);//ǰ��
void EraseDlist(Dlist* pos);//ɾ��posλ�ô�
Dlist* FindDlist(Dlist* phead, DlistDate x);//����
Dlist* InitDlist(Dlist* phead);//��ӡ

