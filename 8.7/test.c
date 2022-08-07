#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}
//void realease(int*  arr,int sz)
//{
//	int i,j,tmp;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 10; j > i; j--)
//		{
//			if ((arr[i] % 2) == 0 && (arr[j] % 2 == 1))
//			{
//				tmp=arr[i];
//					arr[i]=arr[j];
//					arr[j]=tmp;
//			}
//		}
//	}
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* str = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return str;
//}
size_t my_strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = { "abcdef" };
	printf("%u ", my_strlen(arr));
	/*char arr1[10] = { 0 };
	char arr2[] = { "abcdef" };
	char* str =my_strcpy(arr1, arr2);
	printf("%s ", str);*/
	/*int arr[10] = { 2,1,3,5,6,4,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	realease(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*int money;
	printf("有多少钱？");
	scanf("%d", &money);
	printf("能喝%d瓶汽水", 2 * money - 1);
	return 0;*/
	return 0;
}
//#include<stdio.h>
//int main()
//{
//    int n, i, j, k;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("  ");
//            }
//            for (k = 0; k < i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            for (k = 0; k <= n - i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= n; j++)
//			{
//				if (i == j || i + j == n + 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m, n, i;
//	int min = 100;
//	int max = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (m > max)
//			max = m;
//		if (m < min)
//			min = m;
//	}
//	printf("%d", max - min);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 10000; i <= 100000; i++)
//	{
//		int sum = 0;//也可以循环外初始化，在此处赋值为零    
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, flag1, flag2;
//	scanf("%d", &n);
//	int arr[50];
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//
//		if (arr[i] < arr[i + 1])
//			flag1 = 1;
//		else if (arr[i] > arr[i + 1])
//			flag2 = 1;
//	}
//
//	if (flag1 && flag2)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//	return 0;
//}