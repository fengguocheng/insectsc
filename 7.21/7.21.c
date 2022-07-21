#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		
//			if (i % 10 == 9)
//				sum++;
//			if (i / 10 == 9)
//				sum++;
//	}
//	printf("%d", sum);
//	/*float sum = 0;
//	int reg = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += reg*1.0 / i; 
//			reg = -reg;
//	}
//	printf("%f", sum);*/
//	return 0;
//	/*	int a = 0, b = 0;
//		for (a = 1, b = 1; a <= 100; a++)
//		{
//			if (b >= 20) break;
//			if (b % 3 == 1)
//			{
//				b = b + 3;
//				continue;
//			}
//			b = b - 5;
//		}
//		printf("%d\n", a);
//		return 0;*/
//	}
	/*int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum += ret;
	}
	printf("%d  %d  ", ret, sum);
	return 0;*/

//void game()
//{
//	int num = rand() % 100 + 1;
//	int guess;
//	
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("猜大了\n");
//		else if (guess < num)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你猜对了");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("*********** 猜数字游戏 ***********\n");
//	printf("***********  1.  play  ***********\n");
//	printf("***********  0.  exit  ***********\n");
//	printf("**********************************\n");
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int k;
	printf("输入你要查找的数:>");
	scanf("%d", &k);
	while (left<=right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("恭喜你找到了,下标是:%d",mid);
			break;
		}
	}
	if (left > right)
		printf("没找到");
	return 0;
}