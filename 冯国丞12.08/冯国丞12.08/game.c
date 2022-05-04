#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<winbase.h>
#include<assert.h>
#include<math.h>
////#include <stdio.h>
//int main()
//
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 6.28;
//	printf("%d\n", sizeof(pd));
////int a = 10;
////int* p = &a;
////*p = 20;
////printf("%d\n", a);
//return 0;
//}

//int main()
//{
//	/*int a;
//	
	/*printf("你想好好学习吗？输入(1or0)\n");
	scanf("%d", &a);
	if (a == 1)
		printf("nice offer");
	else

		printf("ji!");*/

	//int a = 0;
	//int b = 2;
	//if (a == 0)
	//{
	//	if (b == 2)
	//		printf("hehe\n");
//	//	else
//	//		printf("haha\n");
//	//}
//
//	int a = 2;
//	if (a == 2)
//	{
//		return 1;
//	}
//
//	else
//		return 2;
//
//	return 0;
//}
//
//




//#include<string.h>
//struct Book
//{
//	char name[20];
//	int price;
//	char writer[20];
//	
//};
//int main()
//{
//	struct Book b1 = { "C语言程序及设计",55,"冯国丞" };
//	struct Book* pb = &b1;
//	strcpy(b1.name, "C++");
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//}
//	
//
//
//int main()
//		{
//			int a=1; 
//			while (a <= 100)
//			{
//				if (a % 2 == 1)
//					printf("%d\n", a);
//				a++;
//			}
//			
//		
//			return 0;
//		}
//
//
//	
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:		
//		if (n == 1)
//			printf("hehe\n");
//		
//	case 2:			
//	case 3:			
//	case 4:			
//	case 5:
//			printf("工作日\n");
//			break;
//	case 6:			
//	case 7:
//			printf("休息日\n");
//			break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//
//	return 0;
//}
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
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//
//		}
//	case 4:
//		m++;
//		break;
//
//
//
//	}
//	printf("m=%d\n,n=%d\n", m, n);
//
//
//
//	return 0;
//}
//

/*nt main()
{
	static int i = 1;
		printf("%d\n", i);
		i++;
	if(i==10)




	return 0;*/

//#include <stdio.h>
//struct book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book b1 = { "百年孤独",55 };
//	printf("名字是%s\n",b1.name );
//	printf("价格是%d\n", b1.price);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码;");
//	scanf("%s", password);
//	printf("是否确认？Y/N");
//		while ((ch = getchar()) != '\n')
//		{
//			;
//		}
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//
///*int sum = 1;
//int ret = 1;
//int a = 0;
//for (int n = 2,a=2; n <= 2; n++,a++)
//{
//	ret = ret * a;
//	sum = sum + ret;
//
//}
//
//printf("%d\n", sum);
//return 0;*/
//{
//	for (int a = 1; a < 3; a++)
//		printf("%d\n", a);
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int left =0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid +1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("已找到结果");
//			break;
//		}
//
//	}
//	return 0;
//}

////int main()
//{
//
//	char arr1[] = "welcome to 424!!!!";
//	char arr2[] = "                  ";
//	int left = 0;
//	int right1 = sizeof(arr1) / sizeof(arr2[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);//大小写一定注意
//		system("cls");//clear screen
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
////	
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//			
//			
//		}
//		if (a == b)
//		{
//			printf("%d\n", a);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (int i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//
//}
//int main()乘法口诀表
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			printf("yyyy");
//			break;
//		}
//	}
//	return 0;
//
// 
// 
//}

//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("您的系统将在60秒后关机，如果输入；我是猪，将停止关机！\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("恭喜你停止关机\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//
//}
//猜数字
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		Sleep(1000);
//		system("cls");
//	}
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****  1.play      0.exit  ****\n");
//	printf("******************************\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:>");
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
//			printf("请正确输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pb;
//	*pb = *pa;
//	*pa = tmp;
// }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a ,b);
//	swap(&a, &b);
//		printf("a=%d b=%d", a, b);
//	return 0;
//}
//int  is_prime(int n)
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值为打印的字符个数
//	return 0;
//}
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num %10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int my_strlen( char* str)
//{
//	if (*str !=  '\0')
//		return  1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//		return 0;
//}
//int mathic_c(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * mathic_c(n - 1);
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	scanf("%d", &input);
//	ret = mathic_c(input);
//	printf("%d\n", ret);
//
//	return 0;
//}

////斐波那契数列(效率低）
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (n; n > 2; n--)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
// }
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}
//void bubble_rank(int arr[], int sz)
//{
//	int flag = 1;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//			flag = 0;
//		}
//		if (  flag  == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	  bubble_rank(arr, sz);
//	  for(int i=0;i<sz;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}
//#include<time.h>
//int main()
//{
//	int a = 11;
//	int b = 7;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	/*a = a + b;
//	b = a - b;
//	a = a-b;*/
//	printf("%d %d", a, b);//可能会导致溢出
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int ret = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		ret = ret ^ a[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	int count = 0;
//	//scanf("%d", num);
//	for (int i = 0; i < 32; i++)
//	{
//		if (1==(num>>i&1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}



//模2算法；
//int refcount(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = refcount(n);
//	printf("%d\n", count);
//	return 0;
//}


//按位与算法
//int refcount(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = refcount(n);
//	printf("%d\n", count);
//	return 0;
//}


//两个数二进制有多少不同位之究极蛇皮无敌算法
//int refcount(int n)//究极无敌算法函数求二进制1个数，谷歌面试题
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}
//int main()
//{
//	int n = 1866;
//	int m = 2477;
//	int z = m ^ n;
//	int count = refcount(z);
//	printf("%d\n", count);
//	return 0;
//}



//输出奇数位偶数位二进制数
//void print(int n)
//{
//	printf("奇数位为   ");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		printf(" %d", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
   




//
////用指针打印数组内容
//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//
//不用库函数，递归逆序字符串
//void release_print(char arr[])
//{	
//	int sz = length(arr);
//	char tmp = { 0 };
//	tmp = arr[0];
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if(length(arr+1)>=2)
//	release_print(arr+1);
//	arr[sz - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	release_print(arr);
//	printf("%s ", arr);
//	return 0;
//}
//
//int length(char* p)
//{
//	int count = 0;
//	while(*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//n的k次方
//double power(int n, int k)
//{
//	if (k< 0)
//	{
//		return (1.0 / n * (power(n, k - 1)));
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n*power(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


//满分自造函数求字符串长度实现strlen功能
//int my_strlen(const char* arr1)
//{
//	int count = 0;
//	assert(arr1 != NULL);
//	while (*arr1 != '\0')
//	{
//		arr1++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	int ret = my_strlen(arr1);
//	printf("%d\n", ret);
//	return 0;
//}





//满分自造函数实现strcpy功能
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "*************";
//		char arr2[] = "bit";
//		my_strcpy(arr1, arr2);
//		printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//判断系统大小端
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;//返回1，小端；返回2，大端；
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	else
//		printf("大端");
//	}
//	return 0;
//}



//void text(int* arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[4] = { 0 };
//	text(&arr);
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };//也可以把&去掉，
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void print1(int arr1[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)//arr1指的是首元素地址，对于二维数组而言，因为是遍历，所以是想象中的第一行，也就可以代表[3]
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//printf("%d ", *(p + i)[j]);
//			
//			//printf("%d ", *(*(p + i) + j));//arr[i]=*(arr+i);
//		}
//		printf("\n");
//	}
//}
//
////数组指针
//int main()
//{
//	int arr1[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr1, 3, 5);
//	print2(arr1, 3, 5);
//	return 0;
//}


//指针数组
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int MUL(int x, int y)
//{
//	return x * y;
//}
//int DIV(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 4;
//	int y = 4;
//	int (*p[4])(int x, int y) = {ADD,MUL,SUB,DIV};
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", p[i](x,y));
//	}
//	return 0;
//}



//qsort函数的使用，实现计算器以及各种类型排序
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* er1, const void* er2)
//{
//	return  *(int*)er1 - *(int*)er2;
//}
//int cmp_float(const void* er1, const void* er2)
//{
//	if (*(float*)er1 == *(float*)er2)
//	{
//		return 0;
//	}
//	if (*(float*)er1 < *(float*)er2)
//	{
//		return -1;
//	}
//	if (*(float*)er1 > *(float*)er2)
//	{
//		return 1;
//		}
//}
//int cmp_struct_name(const void* er1, const void* er2)
//{
//	return strcmp(((struct stu*)er1)->name ,((struct stu*)er2)->name);
//}
//int cmp_struct_age(const void* er1, const void* er2)
//{
//	return ((struct stu*)er1)->age-((struct stu*)er2)->age;
//}
//void test1()
//{
//	int arr[] = { 1,3,2,4,5,6,9,2,3,4,2,5,6,7,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	float f[] = { 0.9,0.8,0.7,0.6,0.4,0.6,0.2 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//}
//void test3()
//{
//	struct stu s[3] = { {"wangwu",20},{"lisi",30},{"zhangsan",25}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), cmp_struct_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}



//自定义函数实现qsort
//struct stu
//{
//	char name[20];
//	int age;
//};
//swap(void* er1, void* er2,int width)
//{
//	for (int i = 0; i < width;i++)
//	{
//		char tmp = *((char*)er1 + i);
//		*((char*)er1 + i) = *((char*)er2 + i);
//		*((char*)er2 + i) = tmp;
//	}
//}
//void bubble_sort(void* paper, int size, int width,int(*int_cmp)(const void* er1,const void* er2))
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (int_cmp((char*)paper + width * j, (char*)paper + (j + 1) * width) > 0)
//			{
//				swap((char*)paper + width * j, (char*)paper + (j + 1) * width,width);
//			}
//		}
//	}
//}
//int int_cmp(const void* er1, const void* er2)
//{
//	return (*(int*)er1 - *(int*)er2);
//}
//int age_cmp(const void* er1, const void* er2)
//{
//	return ((struct stu*)er1)->age - ((struct stu*)er2)->age;
//}
//int name_cmp(const void* er1, const void* er2)
//{
//	return strcmp(((struct stu*)er1)->name ,((struct stu*)er2)->name);
//}
//
//void test1()
//{
//	int arr[10] = { 3,4,3,2,1,4,3,7,4,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), age_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//	bubble_sort(s, sz, sizeof(s[0]), name_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}



//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int ret = 0;
//	int sum = 0;
//	for (int i = 0; i < y;i++ )
//	{
//		ret = ret * 10 + x;
//		 sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp )
//		{
//			sum += + pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int line = 0;
//	printf("输入菱形的上半部分行数");
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		for(int j = 0; j <= i;j++ )
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//void bubble(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2) == 1)
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2) == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//			printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//int main()
//{
//	int money = 20;
//	int count = 0;
//	int tmp = 0;//having
//	count = money;//empty
//	tmp = money;
//	while (count>=2)
//	{
//		tmp += (count / 2);
//		count = count / 2 + count % 2;
//	}
//	printf("%d ", tmp);
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	int count = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		count = 2 * money - 1;
//	}
//	printf("%d\n",count);
//	return 0;
//}



//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		for (int k = 0; k <count - i; k++)
//			printf("   ");
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%6d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}




//#include <stdio.h>
//#define N 14
//void main()
//{
//    int i, j, k, n = 0, a[N][N];  /*定义二维数组a[14][14]*/
//    while (n <= 0 || n >= 13) {  /*控制打印的行数不要太大，过大会造成显示不规范*/
//        printf("请输入要打印的行数：");
//        scanf("%d", &n);
//    }
//    printf("%d行杨辉三角如下：\n", n);
//    for (i = 1; i <= n; i++)
//        a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
//    for (i = 3; i <= n; i++)
//        for (j = 2; j <= i - 1; j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*除两边的数外都等于上两顶数之和*/
//    for (i = 1; i <= n; i++) {
//        for (k = 1; k <= n - i; k++)
//            printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
//        for (j = 1; j <= i; j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
//            printf("%6d", a[i][j]);
//
//        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
//    }
//    printf("\n");
//}



//#include <stdio.h>
//long Tri(int r, int c) //杨辉三角算法函数	   
//{
//	return (c == 1 || c == r) ? 1 : Tri(r - 1, c - 1) + Tri(r - 1, c);
//}
//int main()
//{
//	int i, j, n;
//	printf("请输入杨辉三角形的行数（1 ~ 20）：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)	// 输出n行
//	{
//		for (j = 0; j < n - i; j++)		//每行前面补空格，显示成等腰三角形	
//			printf("   ");
//		for (j = 1; j <= i; j++)
//			printf("%6d", Tri(i, j));	//计算并输出杨辉三角形	
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//}


//
//void left_move(char* arr, int k)
//{
//	int sz = strlen(arr);
//	while (k--)
//	{
//		char tmp = *arr;
//		for (int i = 0; i < sz-1; i++)
//		{
//			*(arr + i) = *(arr + i + 1);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}



//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int sz = strlen(arr);
//	reverse(arr,arr+k-1);//left
//	reverse(arr+k,arr+sz-1);//right
//	reverse(arr,arr+sz-1);//total
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


//int left_move(char* arr1, char* arr2)
//{
//	
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	if (sz1 != sz2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1,sz1);
//	char* ret=strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}






//
//int findnum(int* arr[3][3], int k,int* px,int* py)
//{
//	int x =  0;
//	int y =  * py - 1;
//	
//	while(x<=*px-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,7} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = findnum(arr, k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了，下标是%d %d\n", x, y);
//	}
//	else
//		printf("找不到");
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqfd";
//	int ret=my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
//




//char* my_strncpy(char* str1, const char* str2, int k)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while ( k &&  (*str1++ = *str2++))
//	{
//		k--;
//	}
//	while (k--)
//	{
//		*str1 = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcderf";
//	char arr2[]= "dce";
//	char* ret = my_strncpy(arr1, arr2, 5);
//	//strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}




//
//char* my_strncpy(char* str1, const char* str2, int k)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (k && (*str1++ = *str2++))
//		k--;
//	while (k--)
//		*str1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcderf";
//	char arr2[] = "dce";
//	char* ret = my_strncpy(arr1, arr2, 5);
//	//strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, int k)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++)
//	{
//		;
//	}
//	dest--;
//	while (k--)
//	{
//		*dest++ = *src++;
//		if(*dest=='\0')
//		{
//			return ret;
//		}
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0**********";
//	char arr2[] = "world";
//	char* ret = my_strncat(arr1, arr2, 8);
//	printf("%s\n", ret);
//
//	return 0;
//}




//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	char* p1 = NULL;
//	char* p2 = NULL;
//	char* tmp = (char*)s1;
//	if (* s2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*tmp)
//	{
//		p1 = tmp;
//		p2 = (char*)s2;
//		while (*p2  &&  *p1  &&  (*p1==*p2)  )
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return tmp;
//		}
//		tmp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* px1 = "abbbcdef";
//	char* px2 = "aaa";
//	char* tmp = my_strstr(px1, px2);
//	if (tmp == NULL)
//	{
//		printf("没有相应字符串");
//	}
//	else
//		printf("%s\n",tmp);
//	return 0;
//}


//int main()
//{
//	char arr[] = "www.insectsc@.com";
//	char* p = "@.";
//	char buf[2024] = { 0 };
//	strcpy(buf, arr);	
//	char* ret;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//void* my_memcpy(void* str1, const void* str2,int k)
//{
//	void* ret = str1;
//	while (k--)
//	{
//		*(char*)str1 = *(char* )str2;
//		++(char*)str1;
//		++(char*)str2;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d\n",arr2);
//	}
//	return 0;
//}
//
//void* my_memmove(void* dest, const void* src, int k)
//{
//	void* ret = dest;
//	if (dest <= src || (char*)dest >= ((char*)src + k))
//	{
//		while (k--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//    }
//	else
//	{
//		dest = (char*)dest + k - 1;
//		src = (char*)src + k - 1;
//		while (k--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1+2, arr1, 20);//20指的是5个整形
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d\n", *(p + i));
//		}
//		free(p);//释放内存，空间还给系统
//		p = NULL;//自行修改地址，防止隐患
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int* p = (int*)calloc(10 ,sizeof(int));//为10个大小为int的元素开辟空间，并把每个字节初始化为零
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d\n", *(p + i));
//		}
//		free(p);//释放内存，空间还给系统
//		p = NULL;//自行修改地址，防止隐患
//	}
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d\n", *(p + i));
//		}
//		free(p);//释放内存，空间还给系统
//		p = NULL;//自行修改地址，防止隐患
//	}
//	int* ptr = (int*)realloc(p, 1000);//把p扩展为1000个字节的大小；
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 0; i < 250; i++)
//	{
//		*(p + i) = i;	
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	return 0;
//}

//struct stu
//{
//	int i;
//	int arr[0];
//};
//int main()
//{
//	struct stu* p = (struct stu*)malloc(sizeof(struct stu) +sizeof(int)* 5);
//	p->i = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//
//	}
//	struct stu* ptr = (struct stu*)realloc(p, sizeof(struct stu) +sizeof(int) * 5 + 20);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{

	return 0;
}