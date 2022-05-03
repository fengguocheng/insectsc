#include "List.h"
test1()
{
	Dlist* phead = NULL;
	InitDlist(phead);
	PopFront(phead,1);
	PopFront(phead,2);
	PopFront(phead,3);
	PopFront(phead,4);
	PopFront(phead,5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);

}
test2()
{
	Dlist* phead = NULL;
	InitDlist(phead);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);
	PopFront(phead, 5);

}

int main()
{
	test1();
	return 0;
}