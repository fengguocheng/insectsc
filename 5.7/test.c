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