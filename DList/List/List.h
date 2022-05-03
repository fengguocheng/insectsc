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
void PushBack(Dlist* phead, DlistDate x);//Î²²å
void PopBack(Dlist* phead, DlistDate x);//Î²É¾
void PushFront(Dlist* phead, DlistDate x);//Í·²å
void PopFront(Dlist* phead, DlistDate x);//Í·É¾
void InsertDlist(Dlist* phead, DlistDate x);//Ç°²å
void EraseDlist(Dlist* pos);//É¾³ýposÎ»ÖÃ´¦
Dlist* FindDlist(Dlist* phead, DlistDate x);//²éÕÒ
Dlist* InitDlist(Dlist* phead);//´òÓ¡
void DistoryDlist(Dlist* phead);//É¾³ý

