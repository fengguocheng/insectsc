#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int my_strlen(char* str)//非递归方法
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//递归方法

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//char*
	printf("%d\n", len);

	return 0;
}