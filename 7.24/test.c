#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//void swap(int* px, int* py)
//{
//	int tmp;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//void Isleapyear(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d不是闰年", year);
//}
//void IsPrimenum(int sum)
//{
//	int i;
//	for (i = 2; i <= sqrt(sum); i++)
//	{
//		if (sum % i == 0)
//		{
//			printf("%d不是素数", sum);
//			return;
//		}
//	}
//	printf("%d是素数", sum);
//}
//void Factorial(int input)//未递归
//{
//	int ret = 1;
//	for (int i = 1; i <= input; i++)
//	{
//		ret *= i;
//	}
//	printf("%d的阶乘是:%d", input, ret);
//}
//int Factorial(int n)//递归版
//{
//	if (n == 1 || n == 0)
//		return 1;
//	return n * Factorial(n - 1);
//}
int num = rand() % 100 + 1;
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);//数字进行至个位打印后，本身还要执行下一行打印实现
	}
	printf("%d ", n % 10);
}
int main()
{
	int input;
	scanf("%d", &input);
	Print(input);
	/*int input;
	scanf("%d", &input);
	printf("%d的阶乘为%d",input,Factorial(input));*/
	/*int sum;
	scanf("%d", &sum);
	IsPrimenum(sum);*/
	//int year;
	//scanf("%d", &year);
	//Isleapyear(year);
	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("交换前:%d %d\n", a, b);
	swap(&a, &b);
	printf("交换后:%d %d\n", a, b);*/
	//int input;
	//printf("输入乘法表位数:>");
	//scanf("%d", &input);
	//for (int i = 1; i <= input; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("%2d * %d =%2d ",i, j, i * j);
	//	}
	//	printf("\n");
	//}
	return 0;
}