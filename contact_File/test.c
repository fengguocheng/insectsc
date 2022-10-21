#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("*****  0.exit      1.add    ******\n");
	printf("*****  2.delete    3.modify ******\n");
	printf("*****  4.display   5.clear  ******\n");
	printf("*****    6.sort_by_name     ******\n");
	printf("**********************************\n");
}
int main()
{
	int input;
	struct contact con;
	Initcontact(&con);
	do
	{
		Sleep(1000);
		system("cls");
		menu();
		printf("输入功能键:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ADDcontact(&con);
			DIScontact(&con);
			break;
		case DEL:
			DELcontact(&con);
			DIScontact(&con);
			break;
		case MODIFY:
			MODcontact(&con);
			DIScontact(&con);
			break;
		case DISPLAY:
			DIScontact(&con);
			break;
		case CLEAR:
			CLcontact(&con);
			break;
		case SORT:
			STcontact(&con);
			DIScontact(&con);
			break;
		case EXIT:
			Storecontact(&con);
			CLcontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("非法输入，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}




//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    //printf("%d", sizeof(puc));
//    //int sz = sizeof(struct tagPIM);
//    //printf("%d", sz);
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}