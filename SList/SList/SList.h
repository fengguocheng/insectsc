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
void SListPrint(SL* ps);//��ӡ����
void SListPushBack(SL** plist);//����β��
void SListPushFront(SL** plist);//����ͷ��
void SListPopBack(SL** plist);//����βɾ
void SListPopFront(SL** plist);//����ͷɾ
void SListErase(SL** plist, SL* pos);//ɾ��ָ��λ�õ�ֵ
SL* SListFind(SL* plist);//�ҵ�ָ��λ�õ�ֵ�����±�
void SListInsertnumPre(SL** plist, SL* pos);//����ָ��λ��ǰ��ֵ
void SListInsertnumAfter(SL** plist, SL* pos);//����ָ��λ�ú��ֵ
void SListDistory(SL** plist);//��������