#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ADD(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
		return y;
}
int main()
{
	int a = 10, b = 20;
	int c = ADD(a, b);
	printf("%d", c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 40, c = 212;
	int m = (-8 + 22) * a - 10 + c / 2;
	printf("%d", m);
	return 0;
}
#include <stdio.h>
int main()
{
	int IQ;
	scanf("%d", &IQ);
	if (IQ > 140 || IQ == 140)
	{
		printf("Genius");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	printf("Name    Age    Gender\n");
	printf("---------------------\n");
	printf("Jack    18     man   \n");
}
#include <stdio.h>
int main()
{
	int M;
	scanf("%d", &M);//1<=M<=100000
	if (M % 5 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}