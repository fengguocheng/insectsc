#include "SList.h"




testSList1()
{
	SL* con = NULL;
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��

	SListPrint(con);//��ӡ����

}

int main()
{
	testSList1();

	return 0;
}