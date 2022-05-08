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