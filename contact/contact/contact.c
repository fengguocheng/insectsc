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
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void Addcontact(struct contact* con)
{
	Checkcapacity(&con);
		printf("����������:>");
		scanf("%s", con->date[con->size].name);
		printf("�������Ա�:>");
		scanf("%s", con->date[con->size].sex);
		printf("����������:>");
		scanf("%d", &(con->date[con->size].age));
		printf("�������ַ:>");
		scanf("%s", con->date[con->size].addr);
		printf("������:��ϵ��ʽ>");
		scanf("%s", con->date[con->size].tele);
		con->size++;
		printf("��ӳɹ�\n");
}
void Displaycontact(const struct contact* con)
{
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-2s\t%-30s\t%-12s\n", "����", "�Ա�", "����", "��ַ", "�绰");
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
	printf("������Ҫɾ���˵�����:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof = Findname(con, name);
	if (sof == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else if (sof == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		for (int j = sof; j < con->size - 1; j++)
		{
			con->date[j] = con->date[j + 1];
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Searchcontact(const struct contact* con)
{
	printf("������Ҫ���ҵ��˵�����:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof=Findname(con,name);
	printf("%-20s\t%-5s\t%-2s\t%-30s\t%-12s\n", "����", "�Ա�", "����", "��ַ", "�绰");
		printf("%-20s\t%-5s\t%-2d\t%-30s\t%-12s\n",
			con->date[sof].name,
			con->date[sof].sex,
			con->date[sof].age,
			con->date[sof].addr,
			con->date[sof].tele);
}
void Modifycontact(struct contact* con)
{
	printf("������Ҫ�޸ĵ��˵�����:>");
	char name[name_num] = { 0 };
	scanf("%s", name);
	int sof = Findname(con, name);
	if (sof == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else if (sof == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", con->date[sof].name);
		printf("�������Ա�:>");
		scanf("%s", con->date[sof].sex);
		printf("����������:>");
		scanf("%d", &(con->date[sof].age));
		printf("�������ַ:>");
		scanf("%s", con->date[sof].addr);
		printf("������:��ϵ��ʽ>");
		scanf("%s", con->date[sof].tele);
		printf("�޸ĳɹ�\n");
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
	printf("�����������ģʽ:>     1.age 2.name 3.tele 4.addr 5.sex");
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
		printf("�Ƿ�����\n");
	}
	printf("�������\n");
}

