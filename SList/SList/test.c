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
testSList2()
{
	SL* con = NULL;
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SListPushBack(&con);//����β��
	SL*pos=SListFind(con);//����ָ�����ֵ�������ַ
	SListInsertnum(&con, pos);//posλ�ò���
}
int main()
{
	//testSList1();
	testSList2();

	return 0;
}