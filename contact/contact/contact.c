#include "contact.h"
void Initcontact(struct contact* con)
{	
	for (int i = 0; i < con_num; i++)
	{
		con->date= (struct peoinfo*)calloc(con_num, sizeof(struct peoinfo));
	}
	 if(con->date==NULL)
	 { 
		 return;
	 }
	 else
	 {
		 con->size = 0;
		 con->capacity = con_num;
	 }
}
static int Findname(const struct contact* con,char name[name_num])
{
	if (con->size == 0)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void Checkcapacity(struct contact* con)
{
	if (con->size == con->capacity)
	{
		struct peoinfo* ptr = realloc(con->date, sizeof(struct peoinfo) * ((con->capacity) + 2));
		if (ptr != NULL)
		{
			con->date = ptr;
			con->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void Addcontact(struct contact* con)
{
	Checkcapacity(&con);
		printf("请输入姓名:>");
		scanf("%s", con->date[con->size].name);
		printf("请输入性别:>");
		scanf("%s", con->date[con->size].sex);
		printf("请输入年龄:>");
		scanf("%d", &(con->date[con->size].age));
		printf("请输入地址:>");
		scanf("%s", con->date[con->size].addr);
		printf("请输入:联系方式>");
		scanf("%s", con->date[con->size].tele);
		con->size++;
		printf("添加成功\n");
}
void Displaycontact(const struct contact* con)
{
	if (con->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-2s\t%-30s\t%-12s\n", "姓名", "性别", "年龄", "地址", "电话");
		for (int i = 0; i < con->size; i++)
		{
			printf("%-20s\t%-5s\t%-2d\t%-30s\t%-12s\n",
				con->date[i].name,
				con->date[i].sex,
				con->date[i].age,
				con->date[i].addr,
				con->date[i].tele);
		}
	}
}
void Delcontact(struct contact* con)
{
	printf("请输入要删除人的名字:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof = Findname(con, name);
	if (sof == 0)
	{
		printf("通讯录为空\n");
	}
	else if (sof == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		for (int j = sof; j < con->size - 1; j++)
		{
			con->date[j] = con->date[j + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}
void Searchcontact(const struct contact* con)
{
	printf("请输入要查找的人的名字:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof=Findname(con,name);
	printf("%-20s\t%-5s\t%-2s\t%-30s\t%-12s\n", "姓名", "性别", "年龄", "地址", "电话");
		printf("%-20s\t%-5s\t%-2d\t%-30s\t%-12s\n",
			con->date[sof].name,
			con->date[sof].sex,
			con->date[sof].age,
			con->date[sof].addr,
			con->date[sof].tele);
}
void Modifycontact(struct contact* con)
{
	printf("请输入要修改的人的名字:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof = Findname(con, name);
	if (sof == 0)
	{
		printf("通讯录为空\n");
	}
	else if (sof == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", con->date[sof].name);
		printf("请输入性别:>");
		scanf("%s", con->date[sof].sex);
		printf("请输入年龄:>");
		scanf("%d", &(con->date[sof].age));
		printf("请输入地址:>");
		scanf("%s", con->date[sof].addr);
		printf("请输入:联系方式>");
		scanf("%s", con->date[sof].tele);
		printf("修改成功\n");
	}
}
int cmp_struct_name(const void* er1, const void* er2)
{
	return strcmp(((struct contact*)er1)->date->name, ((struct contact*)er2)->date->name);
}
int cmp_struct_age(const void* er1, const void* er2)
{
	return (((struct contact*)er1)->date->age - ((struct contact*)er2)->date->age);
}
void Sortcontact(struct contact* con)
{
	int num;
	printf("请输入排序的模式:>     1.age 2.name 3.tele 4.addr 5.sex");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		qsort(con, sizeof(con->date), sizeof(struct peoinfo), cmp_struct_name);
		break;
	case 2:
	case 3:
	case 4:
	case 5:
		qsort(con, sizeof(con->date), sizeof(struct peoinfo), cmp_struct_age);
		break;
	default:
		printf("非法输入\n");
	}
	printf("排序结束\n");
}

