#include "SList.h"




testSList1()
{
	SL* con = NULL;
	SListPushBack(&con);//链表尾插
	SListPushBack(&con);//链表尾插
	SListPushBack(&con);//链表尾插
	SListPushBack(&con);//链表尾插
	SListPushBack(&con);//链表尾插
	SListPushBack(&con);//链表尾插

	SListPrint(con);//打印链表

}

int main()
{
	testSList1();

	return 0;
}