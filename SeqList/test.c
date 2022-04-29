#include "SeqList.h"
TestSeqList()
{
	SL con;
	SeqListInit(&con);//À≥–Ú±Ì≥ı ºªØ
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListPushBack(&con);//Œ≤≤Â
	SeqListDisplay(&con);//À≥–Ú±Ì¥Ú”°
	SeqListPopBack(&con);//Œ≤…æ
	SeqListPushFront(&con);//Õ∑≤Â
	SeqListDisplay(&con);//À≥–Ú±Ì¥Ú”°
	SeqListPopFront(&con);//Õ∑…æ
	SeqListDisplay(&con);//À≥–Ú±Ì¥Ú”°
	SeqListFind(&con);//À≥–Ú±Ì≤È’“
	SeqListDistory(&con);//œ˙ªŸÀ≥–Ú±Ì
}
int main()
{
	TestSeqList();
	return 0;
}