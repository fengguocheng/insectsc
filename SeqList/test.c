#include "SeqList.h"
TestSeqList()
{
	SL con;
	SeqListInit(&con);//˳����ʼ��
	SeqListPushBack(&con);//β��
	SeqListPushBack(&con);//β��
	SeqListPushBack(&con);//β��
	SeqListPushBack(&con);//β��
	SeqListPushBack(&con);//β��
	SeqListPushBack(&con);//β��
	SeqListDisplay(&con);//˳����ӡ
	SeqListPopBack(&con);//βɾ
	SeqListPushFront(&con);//ͷ��
	SeqListDisplay(&con);//˳����ӡ
	SeqListPopFront(&con);//ͷɾ
	SeqListDisplay(&con);//˳����ӡ
	SeqListFind(&con);//˳������
	SeqListDistory(&con);//����˳���
}
int main()
{
	TestSeqList();
	return 0;
}