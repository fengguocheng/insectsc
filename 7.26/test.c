#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//void reverse_string(char arr[])
//{
//	char tmp;
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//		if(sz > 1)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = '\0';//实现sz-2功能，最后一步逆序还原末尾字符串
//			reverse_string(arr + 1);
//			arr[right] = tmp;
//		}
	/*int sz = strlen(arr);
	char tmp;
	int left = 0;
	int right = sz - 1;
	if(sz>1)
	{
		for (int i = 0; i < sz / 2; i++)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
			sz--;
		}
	}*/
//}
//int my_strlen(char* arr)//递归
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int my_strlen(char* arr)//非递归
//{
//	int sum = 0;
//		while (*arr != '\0')
//		{
//			sum++;
//			arr++;
//		}
//		return sum;
//}
//int Fib(int n)//非递归
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int Fib(int n)//递归
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//void Swapstr(char* px, char* py)
//{
//	int sz = strlen(px);
//	for (int i = 0; i < sz; i++)
//	{
//		char tmp = px[i];
//			px[i] = py[i];
//			py[i] = tmp;
//	}
//}
//void Init(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int* arr, int sz)//非递归
//{
//	int num = sz;
//	if (sz > 1)
//	{
//		for (int i = 0; i < num / 2; i++)
//		{
//			char tmp = arr[i];
//			arr[i] = arr[sz - 1];
//			arr[sz - 1] = tmp;
//			sz--;
//		}
//	}
//}
//void Reverse(int* arr, int sz)//递归
//{
//	if (sz > 1)
//	{
//		char tmp = arr[0];
//		arr[0] = arr[sz - 1];
//		arr[sz - 1] = tmp;
//		sz -= 2;
//		Reverse(arr+1, sz);//另一种方法为先使末尾字符为零，递归结束还原
//	}
//}
void Bubble_sort(int* arr,int sz)
{
	int i, j;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				char tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 3,2,7,6,1,5,4,8,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	for (int i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	    Init(arr,sz);
		Reverse(arr,sz);
		Print(arr, sz);*/
	/*char arr1[] = { "abcdef" };
	char arr2[] = { "qwerty" };
	Swapstr(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/
/*	char str[] = "hello bit";
		printf("%d %d\n", sizeof(str), strlen(str));
		*/
	/*int input;
	scanf("%d", &input);
	printf("%d ", Fib(input));*/
	//char arr[] = { "abcdef" };
	//printf("%d ", my_strlen(arr));
	/*char arr[] = {"abcdef"};
	reverse_string(arr);
	printf("%s", arr);*/
	/*int sum;
	scanf("%d", &sum);
	printf("%d ",DigitSum(sum));*/
	/*int n , k , i ;
	printf("输入底数:  输入次数:  ");
	scanf("%d %d", &n, &k);
	int ret = 1;
	for (i = 1; i <= k; i++)
	{
		ret *= n;
	}
	printf("%d的%d次方=%d", n, k, ret);*/
	return 0;
}