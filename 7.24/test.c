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
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//}
//void IsPrimenum(int sum)
//{
//	int i;
//	for (i = 2; i <= sqrt(sum); i++)
//	{
//		if (sum % i == 0)
//		{
//			printf("%d��������", sum);
//			return;
//		}
//	}
//	printf("%d������", sum);
//}
//void Factorial(int input)//δ�ݹ�
//{
//	int ret = 1;
//	for (int i = 1; i <= input; i++)
//	{
//		ret *= i;
//	}
//	printf("%d�Ľ׳���:%d", input, ret);
//}
//int Factorial(int n)//�ݹ��
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
		Print(n / 10);//���ֽ�������λ��ӡ�󣬱���Ҫִ����һ�д�ӡʵ��
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
	printf("%d�Ľ׳�Ϊ%d",input,Factorial(input));*/
	/*int sum;
	scanf("%d", &sum);
	IsPrimenum(sum);*/
	//int year;
	//scanf("%d", &year);
	//Isleapyear(year);
	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("����ǰ:%d %d\n", a, b);
	swap(&a, &b);
	printf("������:%d %d\n", a, b);*/
	//int input;
	//printf("����˷���λ��:>");
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