#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define OFFSETOF(type,mem) (int)&(((struct book*)0)->mem)
//int main()
//{
//	struct book
//	{
//		char name[5];
//		int price;
//		char writer[5];
//	};
//	printf("%d\n", OFFSETOF(struct book, name));
//	printf("%d\n", OFFSETOF(struct book, price));
//	printf("%d\n", OFFSETOF(struct book, writer));
//
//	return 0;
//}
#define SWAP(num) num=(((num&0xaaaaaaaa)>>1)+((num&0x55555555)<<1))
int main()
{
	int num = 10;
	
	printf("%d\n", SWAP(num));
	
	printf("%d\n", SWAP(num));
	return 0;
}