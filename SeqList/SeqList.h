#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* con;
	SLDateType size;//��Ч����
	SLDateType capacity;//����
}SL;
void SeqListInit(SL* ps);//˳����ʼ��
void SeqListDisplay(SL* ps);//˳����ӡ
void SeqListDistory(SL* ps);//˳�������
void SeqListCheckCapacity(SL* ps);//����˳���
void SeqListPushBack(SL* ps);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ
void SeqListFind(SL* ps);//˳������
void SeqListInsert(SL* ps);//˳��������ָ��λ�õ�ֵ
void SeqListErase(SL* ps);//˳���ɾ�����ض�λ�õ�ֵ