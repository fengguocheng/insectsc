#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
////
////int main()
////{
////    int arr[3] = { 1,2,3 };
////    int* p = &arr[0];
////    printf("%d %d %d", *p, *(p++),*(p+1));
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int year, month;
//
//    if (scanf("%d %d", &year, &month) != EOF)
//    {
//        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//        {
//            switch (month)
//            {
//            case 2:
//                printf("29\n");
//                break;
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                printf("31\n");
//                break;
//            default:
//                printf("30\n");
//                break;
//            }
//        }
//        else
//        {
//            switch (month)
//            {
//            case 2:
//                printf("28\n");
//                break;
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                printf("31\n");
//                break;
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                printf("30\n");
//                break;
//
//            }
//        }
//    }
//
//    return 0;
//}

	/*unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf(" % d, % d\n", *(pulPtr + 3), *pulPtr );
	return 0;*/
	/*int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);*/
	/*int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(ptr + i));
	}
	return 0;*/
//#include<stdio.h>
//#include<string.h>
//	int main()
//	{
//		char arr1[10000];
//		char arr2[10000];
//		gets(arr1);
//		int a, i;
//		a = strlen(arr1);
//		for (i = 0; i < a; i++)
//		{
//			arr2[i] = arr1[a - 1 - i];
//		}
//		printf("%s", arr2);
//		return 0;
//	}
	/*int n,i,j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for (i = 1; i <= n - 1; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= 2 * (n - i) - 1;j++)
			{
				printf("*");
			}
			printf("\n");
		}*/
#include <stdio.h>
#include <math.h>
	int main()
	{
		int m,n,i;
		printf("输入底数:");
		scanf("%d", &m);
		printf("输入次数:");
		scanf("%d", &n);
		int count = 0;
		int sum = 0;
		for(i = 0; i < n; i++)
		{
			count = count * 10 + m;
			sum += count;
		}
		printf("%d ", sum);
	/*	int i;
		int count = 1;
		for (i = 1; i < 100000; i++)
		{
			int count = 1;
			int num = i;
			int sum = 0;
			while (num / 10) {
				count++;
				num = num / 10;
			}
			num = i; 
				
				while (num) {
					sum += pow(num % 10, count);
					num = num / 10;
				}
			if (sum == i) {
				printf("水仙花数为%d \n", i);
			}

		}*/
		return 0;
	}
	/*for(i=0;i<100000;i++)
	{
		if (i < 10)
			printf("%d ", i);
		if (i > 10 && i < 100)
		{
			if ((pow(i / 10, 2) + pow(i % 10, 2)) == i)
				printf("%d ", i);
		}
			 if (i > 100 && i < 1000)
			{
				if((pow(i/100,3)+pow(i%100/10,3)+pow(i%100%10,3))==i)
					printf("%d ", i);
			}
			 if (i > 1000 && i < 10000)
			{
				if((pow(i/1000,4)+pow(i%1000/100,4)+pow(i%1000%100/10,4)+pow(i%1000%100%10,4))==i)
					printf("%d ", i);
			}
			if(i>10000&&i<100000)
			{
				if ((pow(i / 10000, 5) + pow(i % 10000 / 1000, 5) + pow(i % 10000 % 1000 / 100, 5) + pow(i % 10000 % 1000 % 100/10, 5)) == i)
					printf("%d ", i);
			}
		}
	*/
