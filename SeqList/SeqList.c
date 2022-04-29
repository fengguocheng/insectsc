#include "SeqList.h"
void SeqListCheckCapacity(SL* ps)//增容顺序表
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
void SeqListInit(SL* ps)//顺序表初始化
{
	ps->con = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPushBack(SL* ps)//尾插
{
	SeqListCheckCapacity(ps);
	SLDateType num = 0;
		printf("请输入要插入的尾数:");
		scanf("%d", &num);
		ps->con[ps->size] = num;
		ps->size++;
}
void SeqListDisplay(SL* ps)//顺序表打印
{
	for ( int i = 0; i < ps->size; i++ )
	{
		printf(": %d ", ps->con[i]);
	}
	printf("\n");
}
void SeqListPopBack(SL* ps)//尾删
{
	if (ps->size > 0)
	{
		ps->size--;
	}
}
void SeqListPushFront(SL* ps)//头插
{
	SeqListCheckCapacity(ps);
	SLDateType num = 0;
	printf("请输入要头插的数字:");
	scanf("%d", &num);
	for (int i = ps->size-1; i >=0; i--)
	{
		ps->con[i + 1] = ps->con[i];
		ps->con[0] = num;
	}
	ps->size++;
}
void SeqListPopFront(SL* ps)//头删
{
	assert(ps->size >0);
		for (int i = 0; i < ps->size - 1; i++)
		{
			ps->con[i] = ps->con[i + 1];
		}
	ps->size--;
}
void SeqListFind(SL* ps)//顺序表查找
{
	if (ps->size > 0)
	{
		SLDateType num = 0;
		printf("输入要查找的数:");
			scanf("%d", &num);
			for (int i = 0; i < ps->size; i++)
			{
				if (ps->con[i] == num)
				{
					printf("已找到，下标为%d ", i);
					return;
				}
			}
			printf("没有此数字");
	}
}
void SeqListInsert(SL* ps)//顺序表插入在指定位置的值//可以实现代替头插尾插
{
	SeqListCheckCapacity(ps);
	SLDateType x = 0;
	SLDateType y = 0;
	printf("输入数字指明在哪个位置插入何数字:         (例 1 1,在第一个位置插入数字一)");
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
void SeqListErase(SL* ps)//顺序表删除在特定位置的值//可以实现代替头删尾删，函数参数传递要做到
{
	SLDateType x = 0;
	printf("输入数字指明在哪个位置删除数字:");
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