#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void Initcontact(struct contact* con)
{
	memset(con->date, 0, sizeof(con->date));
	con->sz = 0;
}


void DIScontact(struct contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-5s\t%-5s\t%-3s\t%-14s\t%-10s\n","姓名", "性别", "年龄", "电话", "地址");
	int i;
	for (i = 0; i < con->sz; i++)
	{
		printf("%-5s\t%-5s\t%-3d\t%-14s\t%-10s\n", con->date[i].name,
			con->date[i].sex,
			con->date[i].age,
			con->date[i].tele,
			con->date[i].address);
	}
}


void ADDcontact(struct contact* con)
{
	if (con->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入联系人的姓名：\n");
	scanf("%s", &con->date[con->sz].name);
	printf("请输入联系人的年龄：\n");
	scanf("%d", &con->date[con->sz].age);
	printf("请输入联系人的性别：\n");
	scanf("%s", &con->date[con->sz].sex);
	printf("请输入联系人的电话：\n");
	scanf("%s", &con->date[con->sz].tele);
	printf("请输入联系人的地址：\n");
	scanf("%s", &con->date[con->sz].address);
	printf("联系人%s添加成功\n", con->date[con->sz].name);
	con->sz++;
}


int Findperson(struct contact* con, char* name)
{
	int i;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->date[i].name, name) == 0)
		{
			return i;
		}
		else
			return -1;
	}
}


void DELcontact(struct contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NAME_MAX];
	printf("输入你要删除的人的名字:");
	scanf("%s", &name);
	int ret = Findperson(con, name);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	else
	{
		int i;
		for (i = ret; i < con->sz-1; i++)
		{
			con->date[i] = con->date[i + 1];
		}
		con->sz--;
		printf("删除成功\n");
	}
}


void MODcontact(struct contact* con) 
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NAME_MAX];
	printf("输入你要修改的人的名字:");
	scanf("%s", &name);
	int ret = Findperson(con, name);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	else
	{
		printf("请输入联系人的姓名：\n");
		scanf("%s", &con->date[ret].name);
		printf("请输入联系人的年龄：\n");
		scanf("%d", &con->date[ret].age);
		printf("请输入联系人的性别：\n");
		scanf("%s", &con->date[ret].sex);
		printf("请输入联系人的电话：\n");
		scanf("%s", &con->date[ret].tele);
		printf("请输入联系人的地址：\n");
		scanf("%s", &con->date[ret].address);
		printf("联系人%s修改成功\n", con->date[ret].name);
	}
}


void CLcontact(struct contact* con)
{
	Initcontact(con);
	printf("通讯录已清空\n");
}


void STcontact(struct contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	int i, j;
	for (i = 0; i < con->sz - 1; i++)
	{
		for (j = 0; j < con->sz - 1 - i; j++)
		{
			if (strcmp(con->date[j].name, con->date[j + 1].name) > 0)
			{
				struct peoinfo ret= con->date[j];
				con->date[j] = con->date[j + 1];
				con->date[j + 1] = ret;
			}
		}
	}
	printf("排序成功\n");
}

