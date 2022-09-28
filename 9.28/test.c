#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//void* my_memcpy(void* arr1, const void* arr2, unsigned int sz)
//{
//	char* p1 = (char*)arr1;
//	char* p2 = (char*)arr2;
//	while (sz--)
//	{
//		*p1++ = *p2++;
//	}
//	return arr1;
//}
//void* my_memmove(void* dest, const void* src, unsigned int sz)
//{
//	char* p1 = (char*)dest;
//	char* p2 = (const char*)src;
//	assert(src && dest);
//	if (src > dest)//地址小往地址大移，从后向前
//	{
//		while (sz--)
//		{
//			*p1++ = *p2++;
//		}
//	}
//	else
//	{
//		while (sz--)
//		{
//			*(p1 + sz) = *(p2 + sz);
//		}
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = { "abcdefg"};
//	/*char arr2[10] = { "abcdefg" };
//	my_memcpy(arr1, arr2, 4);*/
//	my_memmove(arr1, arr1+2, 4); 
//
//	printf("%s", arr1);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int digits = 1;//位数
//    int sum = 0;
//    while (digits < n)
//    {
//        sum += (n / digits % 2) * digits;//递归的效果得出每一位的奇偶性然后乘以位数
//        digits *= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int cmp_int(const void* p1, const void* p2)
//{
//    return *(int*)p2 - *(int*)p1;
//}
//int main()
//{
//    int n, i;
//    int arr[50];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, sizeof(int), cmp_int);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int n;
//    int arr[20][20];
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                arr[i][j] = j + 1;
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j =0; j < n-1-i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//int main()
//{
//	printf("%d %d", sizeof(struct A), sizeof(struct B));
//}
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
// struct stu{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
// int sz = sizeof(AA_t);
//#include <stdio.h>
//
//int main()
//{
//    int n, i, tmp;
//    int arr[100000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;//桶排序
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i])
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    char arr[20][20];
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}