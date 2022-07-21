#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	if (a == 5)
//		printf("666");
//	printf("777");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
#include <stdio.h>
#include <math.h>
//void Addself()
//{
//	static int tmp = 0;
//	tmp += 1;
//	printf("%d", tmp);
//}
//int main()
//{
//	
//	/*extern num;
//	int main()
//	{
//		printf("%d", num);
//		return 0;
//	}
//	for (int i = 1; i <= 2; i++)
//	{
//		Addself();
//	}
//	return 0;*/
//}
//int main()
//{
//	int a = 1, b = 1;
//	int c = a > b ? 2 : (a < b ? 1 : 0);
//	switch (c)
//	{
//	case 2:
//		printf("%d>%d\n", a, b);
//		break;
//	case 1:
//		printf("%d<%d\n", a, b);
//		break;
//	case 0:
//		printf("%d=%d\n", a, b);
//		break;
//	}
//	return 0;
//}
	
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int max = a[0];
	//for (int i = 1; i < 10; i++)
	//{
	//	if (a[i] > max)
	//		max = a[i];
	//}
	//printf("%d", max);
	/*int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%d=%2d", i, j, i * j);
		}
		printf("\n");
	}*/
	//return 0;
	/*int a, b, c;
	
	while (1)
	{
		scanf("%d%d", &a, &b);
		c = a % b;
		while(c)
		{
			a = b;
			b = c;
			c = a % b;
		}
		printf("%d", b);
	}*/
	/*int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			printf("%d ", year);
	}*/
	//return 0;
	/*int i, j;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if ((i % j) == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ", i);
	}
	return 0;*/

	/*int a[3];
	int i, j, tmp;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;*/

	/*int a;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("%d ", a);
	}
	return 0;
*/

	/*int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;*/
//{
//	int b;
//	switch (1)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	printf("%d", b);
//	return b;
//}
int main()
{
		//整型数a，字符c，浮点数f，字符串str（可看做字符串）
		int a;
		char c;
		float f;
		char str[20];
		/*scanf("%d", &a);
		scanf("%c", &c);
		scanf("%f", &f);
		scanf("%s", &str);*/
		scanf("%d,%c,%f,%s", &a, &c, &f, &str);
		printf("a=%d,c=%c,f=%f,str=%s\n", a, c, f, str);
}