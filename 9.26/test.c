#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//char player1 = 'A';
	//char player2 = 'B';
	//char player3 = 'C';
	//char player4 = 'D';
	//char player5 = 'E';
	//if ((('A' == 3) + ('B' == 2) == 1) &&
	//	(('B' == 2) + ('E' == 4) == 1) &&
	//	(('C' == 1) + ('D' == 2) == 1) &&
	//	(('D' == 3) + ('C' == 5) == 1) &&
	//	(('E' == 4) + ('A' == 1) == 1))
	//{
	//	if (('A' * 'B' * 'C' * 'D' * 'E') == 120)
	//	{
	//		printf("%d %d %d %d %d\n", 'A', 'B', 'C', 'D', 'E');
	//	}
	//}
	///*for (player = 'A'; player <= 'E';player++)
	//{
	//	
	//}*/
		/*for (int a = 1; a <= 5; a++)
		{
			for (int b = 1; b <= 5; b++)
			{
				for (int c = 1; c <= 5; c++)
				{
					for (int d = 1; d <= 5; d++)
					{
						for (int e = 1; e <= 5; e++)
						{
							if (((b == 2) + (a == 3)) == 1 &&
								((b == 2) + (e == 4)) == 1 &&
								((c == 1) + (d == 2)) == 1 &&
								((c == 5) + (d == 3)) == 1 &&
								((e == 4) + (a == 1)) == 1)
							{
								if (a * b * c * d * e == 120)           
									printf("  a=%2d\n  b=%2d\n  c=%2d\n  d=%2d\n  e=%2d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}*/
	//int killer;
	//for (killer = 'A'; killer <= 'D'; killer++)
	//{
	//	if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
	//	{
	//		printf("killer is %c\n", killer);
	//	}
	//}

	//int dimension = 0;
	//int arr[10][10] = { 0 };
	//int i=0,j=0;
	//scanf("%d", &dimension);
	//for (i = 0; i < dimension; i++)
	//{
	//	for (j = 0; j <= i; j++)//行
	//	{
	//		if (i == j || j == 0)//对角线和第一列为1
	//			arr[i][j] = 1;
	//		else
	//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
	//	}
	//}
	//for (i = 0; i < dimension; i++)
	//{
	//	for (j = dimension - 1 - i; j >= 0; j--)
	//	{
	//		printf(" ");//空格
	//	}
	//	for (j = 0; j <= i; j++)	
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//int main()
	//{
	//	int i, j, n, k, t;
	//	int arr[21] = { 0,1 };    //保存一行
	//	printf("请输入杨辉三角形的行数（1 ~ 20）：");
	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		for (j = 0; j < n - i; j++)
	//			printf(" ");
	//		t = 0;
	//		for (j = 1; j <= i; j++)
	//		{
	//			k = arr[j];
	//			arr[j] = t + k;		//三角和计算
	//			t = k;
	//			printf("%d ",arr[j]);
	//		}
	//		printf("\n");
	//	}
	//	return 0;
	//}
//int main()
//{
//	int i, j, n, k, t;
//	int arr[21] = { 0,1 };    //保存一行
//	printf("请输入杨辉三角形的行数（1 ~ 20）：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//			printf(" ");
//		t = 0;//0的作用想象外层一圈0，为保证每一行的第一个数字为1
//		for (j = 1; j <= i; j++)
//		{
//			k = Buf[j];
//			Buf[j] = t + k;		//三角和计算
//			t = k;
//			printf("%d ", Buf[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k;
//	int n = 3;
//	printf("输入你要查找的数字:>");
//	scanf("%d", &k);
//	int i = 0, j = n - 1;
//	while (i < 3 && j >= 0)
//	{
//		if (k < arr[i][j])
//			j--;
//		else if (k > arr[i][j])
//			i++;
//		else
//		{
//			printf("找到了，下标为%d %d\n", i, j);
//			return 0;
//		}
//	}
//	printf("找不到");
//	return 0;
//}
#include <string.h>
#include <assert.h>
//void left_move(char arr[], int sz,int k)
//{
//	assert(arr);
//	k %= sz;
//	while (k--)
//	{
//		char tmp = arr[0];
//		int i, j;
//		for (i = 0; i < sz; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz - 1] = tmp;
//	 }
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = strlen(arr);
//	int k;
//	printf("输入想要左旋的位数:");
//	scanf("%d", &k);
//	left_move(arr, sz,k);
//	printf("%s\n", arr);
//	return 0;
//}
void Is_leftmove(char* arr1, char* arr2)
{
	int sz = strlen(arr1);
	int num = sz;
	while (num--)
	{
		        char tmp = arr1[0];
				int i;
				for (i = 0; i < sz-1; i++)
				{
					arr1[i] = arr1[i + 1];
				}
				arr1[sz - 1] = tmp;
				if (0 == (strcmp(arr1, arr2)))
				{
					printf("yes");
					return;
				}
	}
	printf("no");
}
int main()
{
	char arr1[] = { "AABCD" };
	char arr2[] = { "BCDAA" };
	Is_leftmove(arr1, arr2);
	return 0;
}