int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵΪ��ӡ���ַ�����
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

////쳲���������(Ч�ʵͣ�
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
//	printf("%d %d", a, b);//���ܻᵼ�����
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



//ģ2�㷨��
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


//��λ���㷨
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


//�������������ж��ٲ�ͬλ֮������Ƥ�޵��㷨
//int refcount(int n)//�����޵��㷨�����������1�������ȸ�������
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



//�������λż��λ��������
//void print(int n)
//{
//	printf("����λΪ   ");
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
////��ָ���ӡ��������
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
//���ÿ⺯�����ݹ������ַ���
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

//n��k�η�
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


//�������캯�����ַ�������ʵ��strlen����
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





//�������캯��ʵ��strcpy����
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

//�ж�ϵͳ��С��
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;//����1��С�ˣ�����2����ˣ�
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	else
//		printf("���");
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


//ָ������
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };//Ҳ���԰�&ȥ����
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
//void print2(int(*p)[5], int x, int y)//arr1ָ������Ԫ�ص�ַ�����ڶ�ά������ԣ���Ϊ�Ǳ����������������еĵ�һ�У�Ҳ�Ϳ��Դ���[3]
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
////����ָ��
//int main()
//{
//	int arr1[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr1, 3, 5);
//	print2(arr1, 3, 5);
//	return 0;
//}

