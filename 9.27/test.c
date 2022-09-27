#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int n;
//    char arr[20][20] = { 0 };
//    while (scanf("%d", &n) == 1) {
//        int i, j;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1) 
//                {
//                    arr[i][j] = '*';
//                    printf("%c ", arr[i][j]);
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int n;
//    char arr[20][20] = { };
//    while (scanf("%d", &n) == 1) {
//        int i, j;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
//                    printf("* ");
//                }
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//
//}
//int main()
//{
//    int arr[51] = { 0 };
//    int N;
//    scanf("%d", &N);
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int k;
//    scanf("%d", &k);
//    for (i = N; k <= arr[i - 1]; i--)
//    {
//        arr[i] = arr[i - 1];
//    }
//    arr[N] = k;
//    for (i = 0; i < N + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int arr[51] = { 0 };
//    int N;
//    scanf("%d", &N);
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int k;
//    scanf("%d", &k);
//    for (i = N; k < arr[i - 1]; i--)
//    {
//        arr[i] = arr[i - 1];
//    }
//    arr[i] = k;
//    for (i = 0; i < N + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//void print_arr(int (*arr)[5], int row, int col)
//{
//	;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr(arr, 3, 5);
//	return 0;
//}
//struct student
//{
//	char name[20];
//	int age;
//};
//void print(int* arr,int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_int(const void* str1,const void* str2)
//{
//	return *(int*)str1 - *(int*)str2;
//}
//int cmp_char(const void* str1, const void* str2)
//{
//	return *(char*)str1 - *(char*)str2;
//}
//int cmp_str(const void* str1, const void* str2)
//{
//	return strcmp(*(char**)str1, *(char**)str2);//将字符串先取出来在解引用得到字符串地址，不然取得是数组的地址
//}
//int cmp_flo(const void* str1, const void* str2)
//{
//	return (((*(double*)str1 - *(double*)str2) > 0) ? 1 : -1);//两数相减小于1时，int返回0，所以用三目
//}
//int cmp_struct_by_age(const void* str1, const void* str2)
//{
//	return ((struct student*)str1)->age - ((struct student*)str2)->age;
//}
//int cmp_struct_by_name(const void* str1, const void* str2)
//{
//	return strcmp(((struct student*)str1)->name , ((struct student*)str2)->name);
//}
//
//int main()
//{
	//int arr[9]={1, 3, 4, 2, 7, 9, 5, 6, 8};
	//qsort(arr, 9, sizeof(int), cmp_int);
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//print(arr,sz);
	//char arr[6] = { 'a','c','d','e','b','f' };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(char), cmp_char);
	/*char* arr[3] = { "wangwu","zhangsan","lisi" };
	qsort(arr, 3, sizeof(char*), cmp_str);
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", arr[i]);
	}*/
	/*double arr[5] = { 2.0,1.0,0.5,4.5,1.5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(double), cmp_flo);
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}*/
//	struct student arr[3] = { {"zhangsan",20},{"lisi",19},{"wangwu",25} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(struct student), cmp_struct_by_age);
//	qsort(arr, sz, sizeof(struct student), cmp_struct_by_name);
//	/*for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i].age);
//	}*/
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i].name);
//	}
//	return 0;
//}
//void swap(char* str1, char* str2,int sz)
//{
//	int i;
//	for (i = 0; i <sz; i++)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2++;
//	}
//}
//int cmp_int(const void* str1, const void* str2)
//{
//	return *(int*)str1 - *(int*)str2;
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp_int)(const void* str1, const void* str2))
//{
//	unsigned int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp_int((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//
//	}
//}
//int main()
//{
//	int arr[5] = { 2,1,3,5,4 };
//	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(int),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
// }
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//				printf("Equilateral triangle!\n");
//			else if ((a == b && b != c) || (a == c && a != b) || (b == c && a != b))
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int score, max = 0, min = 100, sum = 0, count = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score > max)
//            max = score;
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//        count++;
//        if (count == 7)
//        {
//            printf("%.2f\n", (sum - max - min) / 5.0);
//            count = 0;
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char n;
//	int countA = 0, countB = 0;
//	while (scanf("%c", &n) != EOF)
//	{
//		if (n == '0')
//			break;
//		if (n == 'A')
//			countA++;
//		else
//			countB++;
//	}
//	if (countA > countB)
//		printf("A");
//	else if (countA < countB)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int status;
//    while (scanf("%d", &status) != EOF) {
//        switch (status) {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//        }
//    }
//    return 0;
//}
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//#include <assert.h>
//void my_strcpy(char* arr2, const char* arr)
//{
//	assert(arr2 && arr);
//	while (*arr2++=*arr++)
//	{
//		;
//	}
//}
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	if (sz1 != sz2)
//		return -1;
//	while ( *arr1 == *arr2 )
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr2 - *arr1;
//}
//int main()
//{
//	char arr2[10] = { "abcdefgi" };
//	char arr1[10] = { "abcdefgh" };
//	//my_strcpy(arr2, arr);
//	//printf("%d ",my_strlen(arr));
//	int ret=my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("arr1<arr2");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1>arr2");
//	}
//	else
//		printf("arr1=arr2");
//	//printf("%s", arr2);
//	return 0;
//}
//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* ret = arr1;
//	while (*arr1)
//	{
//		arr1++;//不能在while里面自增，在找到0后还会自增
//	}
//	while (*arr1++ = *arr2++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { "abc" };
//	char arr2[6] = { "qwert" };
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}
char* my_strstr(char* str1, const char* str2)
{
	char* p1 = str1;
	char* p2 = (char*)str2;
	char* ret = str1;
	while (*ret)
	{
		p1 = ret;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return ret;
		p2 = (char*)str2;
		ret++;
	}
	return NULL;
}
int main()
{
	char arr1[20] = { "strcmp" };
	char arr2[20] = { "cmp" };
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("no\n");
	else
		printf("%s", ret);
	return 0;
}