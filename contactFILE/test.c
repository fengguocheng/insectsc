#include "contact.h"


void menu()
{
	printf("*****************************************\n");
	printf("*******  1.Del           2.Add     ******\n");
	printf("*******  3.Search        4.Modify  ******\n");
	printf("*******  5.Display       6.Sort    ******\n");
	printf("*******  7.Save          0.Exit    ******\n");
	printf("*****************************************\n");
}
int main()
{
	int input = 0;
	struct contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("请输入模式;>");
		scanf("%d", &input);
		switch (input)
		{
		case DEL:
			Delcontact(&con);
			break;
		case ADD:
			Addcontact(&con);
			break;
		case SEARCH:
			Searchcontact(&con);
			break;
		case MODIFY:
			Modifycontact(&con);
			break;
		case DISPLAY:
			Displaycontact(&con);
			break;
		case SORT:
			Sortcontact(&con);
			break;
		case EXIT:
			Savecontact(&con);
			printf("退出通讯录\n");
			break;
		case SAVE:
			Savecontact(&con);
			break;
		default:
			printf("输入错误\n");
			break;
		}
		} while (input);
	return 0;
}