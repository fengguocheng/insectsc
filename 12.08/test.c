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
	/*printf("����ú�ѧϰ������(1or0)\n");
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
	//	struct Book b1 = { "C���Գ������",55,"���ة" };
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
	//			printf("������\n");
	//			break;
	//	case 6:			
	//	case 7:
	//			printf("��Ϣ��\n");
	//			break;
	//	default:
	//		printf("�������\n");
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
		//	struct book b1 = { "����¶�",55 };
		//	printf("������%s\n",b1.name );
		//	printf("�۸���%d\n", b1.price);
		//	return 0;
		//}
		//#include<stdio.h>
		//int main()
		//{
		//	int a = 0;
		//	int ch = 0;
		//	char password[20] = { 0 };
		//	printf("����������;");
		//	scanf("%s", password);
		//	printf("�Ƿ�ȷ�ϣ�Y/N");
		//		while ((ch = getchar()) != '\n')
		//		{
		//			;
		//		}
		//	a = getchar();
		//	if (a == 'Y')
		//	{
		//		printf("ȷ�ϳɹ�\n");
		//	}
		//	else
		//	{
		//		printf("����ȷ��\n");
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
		//			printf("���ҵ����");
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
		//		Sleep(1000);//��Сдһ��ע��
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
		//int main()�˷��ھ���
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
		//	printf("����ϵͳ����60���ػ���������룻��������ֹͣ�ػ���\n");
		//	scanf("%s", &input);
		//	if (strcmp(input, "������") == 0)
		//	{
		//		system("shutdown -a");
		//		printf("��ϲ��ֹͣ�ػ�\n");
		//	}
		//	else
		//	{
		//		goto again;
		//	}
		//	return 0;
		//
		//
		//}
		//������
		//void game()
		//{
		//	int ret = 0;
		//	int guess = 0;
		//	ret = rand() % 100 + 1;
		//	while (1)
		//	{
		//		printf("������:>");
		//		scanf("%d", &guess);
		//		if (guess > ret)
		//		{
		//			printf("�´���\n");
		//		}
		//		else if (guess < ret)
		//		{
		//			printf("��С��\n");
		//		}
		//		else
		//		{
		//			printf("��ϲ��¶���\n");
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
		//		printf("������:>");
		//		scanf("%d", &input);
		//		switch (input)
		//		{
		//		case 1:
		//			game();
		//			break;
		//		case 0:
		//			printf("�˳���Ϸ\n");
		//			break;
		//		default:
		//			printf("����ȷ����\n");
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