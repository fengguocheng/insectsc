#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("% x\n" , a.k);
//    return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[20] = { 1,1,2,2,3,3,4,5,5,6,7,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int num1=0, num2=0;
//	int num = ret & (~ret + 1);
//	for (i = 0; i < sz; i++)
//	{
//		if (num & arr[i])
//		{
//			num1 ^= arr[i];//��1�������һ��
//		}
//		else
//		{
//			num2 ^= arr[i];//��0�������һ��
//		}
//	}
//	printf("%d %d", num1, num2);
//	return 0;
//}

//char* my_strncpy(char* arr1, const char* arr2, size_t num)
//{
//	assert(arr1 && arr2);
//	char* p1 = arr1;
//	char* p2 = (char*)arr2;
//	while (*p1++=*p2++)
//	{
//		num = num - 1;
//	}
//	if (num)
//	{
//		while (num)
//		{
//			*p1++ = '0';
//			num=num-1;
//		}
//	}
//	
//	return arr1;
//}
//int main()
//{
//	char arr1[20] = { "********************"};
//	char arr2[6] = { "abcde" };
//	my_strncpy(arr1, arr2, 10);
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* p1 = dest;
//	while (*p1)
//	{
//		p1++;
//	}
//	while (  num-- && (*p1++ = *src++))//num���Ƶ�numС��src���ȣ����߿��ƴ���
//	{
//		;
//	}
//	*p1 = '\0';//һ���㹻��Ŀռ�'\0'�����Ǳ���ʼ��Ϊ0�ģ�������һ�����Բ�Ҫ����Ȼ�����������ʼ���Ľ��������ǿո���߱���Ǿ͵ü���
//	return dest;
//}
//int main()
//{
//	char arr1[20] = { "abc" };
//	char arr2[5] = { "abcd" };
//	my_strncat(arr1, arr2, 6);
//	printf("%s", arr1);
//	return 0;
//}


//int my_atoi(const char* str)
//{
//	assert(str);
//	int flag = 1;
//	long long num = 0;//�����������÷�Χ�ͳ���int��Χ
//	if (*str=='\0')//���ַ���
//	{
//		return 0;
//	}
//	while (*str == ' ')//�ո��ַ�
//	{
//		str++;
//	}
//	if (*str == '-' || *str == '+')//������
//	{
//		if (*str == '-')
//		{
//			flag = -1;
//		}
//		str++;
//	}
//	while (*str >= '0' && *str <= '9')
//	{
//		num = num * 10 +(*str - '0');
//		str++;
//		if (num > INT_MAX)
//		{
//			num = INT_MAX;
//			break;
//		}
//		else if (num < INT_MIN)
//		{
//			num = INT_MIN;
//			break;
//		}
//	}
//	return flag * num;
//
//}
//
//int main()
//{
//	//�÷������ַ�����������ַ�ת��Ϊ����������������ֵ��
//	//ע�⣺ת��ʱ����ǰ��Ŀո��ַ���ֱ���������ֻ��������Ųſ�ʼ��ת�����������������ֻ��ַ�������ʱ('/0')�Ž���ת��������������ء�
//	//���atoi()����ת��ʧ�ܣ�����Ҫת�������ͳ�����int��ʾ�ķ�Χ
//	// ���Ҫת�������������򷵻�INT_MAX��2147483647��
//	//���Ҫת�����Ǹ������򷵻�INT_MIN��-2147483648��
//	char* s1 = "333640";
//	char* s2 = "-12345";
//	char* s3 = "123.3113";
//	char* s4 = "-8362865623872387698";
//	char* s5 = "+246653278";
//	char* s6 = "+1234w34";
//	char* s7 = "   456er12";
//	char* s8 = "789 123";
//	int a, b, c, d, e, f, g, h;
//	a = my_atoi(s1);
//	b = my_atoi(s2);
//	c = my_atoi(s3);
//	d = my_atoi(s4);
//	e = my_atoi(s5);
//	f = my_atoi(s6);
//	g = my_atoi(s7);
//	h = my_atoi(s8);
//	
//
//	printf("%d\n", my_atoi(s1));
//	printf("%d\n", my_atoi(s2));
//	printf("%d\n", my_atoi(s3));
//	printf("%d\n", my_atoi(s4));
//	printf("%d\n", my_atoi(s5));
//	printf("%d\n", my_atoi(s6));
//	printf("%d\n", my_atoi(s7));
//	printf("%d\n", my_atoi(s8));
//	return 0;
//}

