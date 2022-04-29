#include "SeqList.h"
void SeqListCheckCapacity(SL* ps)//����˳���
{
	if (ps->size == ps->capacity)
	{
		SLDateType newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* tmp = (SLDateType*)realloc(ps->con, newcapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("Failed\n");
			exit(-1);
		}
		ps->con = tmp;
		ps->capacity = newcapacity;
	}
}
void SeqListInit(SL* ps)//˳����ʼ��
{
	ps->con = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPushBack(SL* ps)//β��
{
	SeqListCheckCapacity(ps);
	SLDateType num = 0;
		printf("������Ҫ�����β��:");
		scanf("%d", &num);
		ps->con[ps->size] = num;
		ps->size++;
}
void SeqListDisplay(SL* ps)//˳����ӡ
{
	for ( int i = 0; i < ps->size; i++ )
	{
		printf(": %d ", ps->con[i]);
	}
	printf("\n");
}
void SeqListPopBack(SL* ps)//βɾ
{
	if (ps->size > 0)
	{
		ps->size--;
	}
}
void SeqListPushFront(SL* ps)//ͷ��
{
	SeqListCheckCapacity(ps);
	SLDateType num = 0;
	printf("������Ҫͷ�������:");
	scanf("%d", &num);
	for (int i = ps->size-1; i >=0; i--)
	{
		ps->con[i + 1] = ps->con[i];
		ps->con[0] = num;
	}
	ps->size++;
}
void SeqListPopFront(SL* ps)//ͷɾ
{
	assert(ps->size >0);
		for (int i = 0; i < ps->size - 1; i++)
		{
			ps->con[i] = ps->con[i + 1];
		}
	ps->size--;
}
void SeqListFind(SL* ps)//˳������
{
	if (ps->size > 0)
	{
		SLDateType num = 0;
		printf("����Ҫ���ҵ���:");
			scanf("%d", &num);
			for (int i = 0; i < ps->size; i++)
			{
				if (ps->con[i] == num)
				{
					printf("���ҵ����±�Ϊ%d ", i);
					return;
				}
			}
			printf("û�д�����");
	}
}
void SeqListInsert(SL* ps)//˳��������ָ��λ�õ�ֵ//����ʵ�ִ���ͷ��β��
{
	SeqListCheckCapacity(ps);
	SLDateType x = 0;
	SLDateType y = 0;
	printf("��������ָ�����ĸ�λ�ò��������:         (�� 1 1,�ڵ�һ��λ�ò�������һ)");
	scanf("%d%d", &x, &y);
	if (x <= ps->size || x >= 0)
	{
		for (int i = ps->size - 1; i >= x - 1; i--)
		{
			ps->con[i + 1] = ps->con[i];
			ps->con[x - 1] = y;
		}
		ps->size++;
	}	
}
void SeqListErase(SL* ps)//˳���ɾ�����ض�λ�õ�ֵ//����ʵ�ִ���ͷɾβɾ��������������Ҫ����
{
	SLDateType x = 0;
	printf("��������ָ�����ĸ�λ��ɾ������:");
	scanf("%d%d", &x);
	if (x < ps->size || x >= 0)
	{
		for (int i = x - 1; i < ps->size - 1; i++)
		{
			ps->con[i] = ps->con[i + 1];
		}
		ps->size--;
	}	
}
void SeqListDistory(SL* ps)
{
	free(ps->con);
	ps->con = NULL;
	ps->size = ps->capacity = 0;
}