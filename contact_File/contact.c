#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static void CheckCapacity(struct contact* con);

void Loadcontact(struct contact* con)//加载通讯录
{
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("Load::fopen");
		return;
	}
	struct peoinfo ret = { 0 };
	while (fread(&ret, sizeof(struct peoinfo), 1, pf))
	{
		CheckCapacity(con);
		con->date[con->sz] = ret;
		con->sz++;
	}
	fclose(pf);
	pf = NULL;
}


void Initcontact(struct contact* con)
{
	assert(con);
	con->sz = 0;
	con->date = (struct peoinfo*)calloc(3, sizeof(struct peoinfo));
	if (con->date == NULL)
	{
		perror("con->date");
		return;
	}
	con->capacity = 3;
	Loadcontact(con);
}


void DIScontact(struct contact* con)
{
	assert(con);
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-5s\t%-5s\t%-3s\t%-14s\t%-10s\n", "姓名", "性别", "年龄", "电话", "地址");
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



static void CheckCapacity(struct contact* con)
{
	assert(con);
	if (con->sz==con->capacity)
	{
		struct peoinfo* ptr = (struct peoinfo*)realloc(con->date, (con->capacity + INC_SZ) * sizeof(struct peoinfo));
		if (ptr == NULL)
		{
			perror("con->date");
		}
		else
		{
			con->date = ptr;
			con->capacity += INC_SZ;
		}
	}
}


void ADDcontact(struct contact* con)
{
	assert(con);
	CheckCapacity(con);
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
	assert(con);
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
		for (i = ret; i < con->sz - 1; i++)
		{
			con->date[i] = con->date[i + 1];
		}
		con->sz--;
		printf("删除成功\n");
	}
}


void MODcontact(struct contact* con)
{
	assert(con);
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
	assert(con);
	free(con->date);
	con->date = NULL;
}



int Cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->name, ((struct peoinfo*)e2)->name);
}
int Cmp_age(const void* e1, const void* e2)
{
	return ((struct peoinfo*)e1)->age - ((struct peoinfo*)e2)->age;
}
int Cmp_sex(const void* e1, const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->sex, ((struct peoinfo*)e2)->sex);
}
int Cmp_tele(const void* e1, const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->tele, ((struct peoinfo*)e2)->tele);
}
int Cmp_address(const void* e1, const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->address, ((struct peoinfo*)e2)->address);
}
void STcontact(struct contact* con)
{
	assert(con);
	int input;
	int (*arr[])(const void*, const void*) = { Cmp_name,Cmp_age ,Cmp_sex,Cmp_tele,Cmp_address };
	if (con->sz==0)
	{
		printf("通信录为空\n");
		return;
	}
	printf("请选择排序模式:> 0.姓名 1.年龄 2.性别 3.电话 4.地址\n");
	while (1)
	{
		scanf("%d", &input);
		if (input < 4 && input>0)
		{
			qsort(con->date, con->sz, sizeof(struct peoinfo), arr[input]);
			printf("排序成功\n");
			return;
		}
		else
		{
			printf("输入非法，请重新输入:\n");
		}
	}
}
void Storecontact(struct contact* con)//保存通讯录
{
	FILE* pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		perror("store:fopen");
		return;
	}
	int i;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(con->date+i, sizeof(struct peoinfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("通讯录已保存\n");
}
