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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-5s\t%-5s\t%-3s\t%-14s\t%-10s\n","����", "�Ա�", "����", "�绰", "��ַ");
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
		printf("ͨѶ¼����\n");
		return;
	}
	printf("��������ϵ�˵�������\n");
	scanf("%s", &con->date[con->sz].name);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &con->date[con->sz].age);
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", &con->date[con->sz].sex);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", &con->date[con->sz].tele);
	printf("��������ϵ�˵ĵ�ַ��\n");
	scanf("%s", &con->date[con->sz].address);
	printf("��ϵ��%s��ӳɹ�\n", con->date[con->sz].name);
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[NAME_MAX];
	printf("������Ҫɾ�����˵�����:");
	scanf("%s", &name);
	int ret = Findperson(con, name);
	if (ret == -1)
	{
		printf("ͨѶ¼���޴���\n");
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
		printf("ɾ���ɹ�\n");
	}
}


void MODcontact(struct contact* con) 
{
	if (con->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��˵�����:");
	scanf("%s", &name);
	int ret = Findperson(con, name);
	if (ret == -1)
	{
		printf("ͨѶ¼���޴���\n");
		return;
	}
	else
	{
		printf("��������ϵ�˵�������\n");
		scanf("%s", &con->date[ret].name);
		printf("��������ϵ�˵����䣺\n");
		scanf("%d", &con->date[ret].age);
		printf("��������ϵ�˵��Ա�\n");
		scanf("%s", &con->date[ret].sex);
		printf("��������ϵ�˵ĵ绰��\n");
		scanf("%s", &con->date[ret].tele);
		printf("��������ϵ�˵ĵ�ַ��\n");
		scanf("%s", &con->date[ret].address);
		printf("��ϵ��%s�޸ĳɹ�\n", con->date[ret].name);
	}
}


void CLcontact(struct contact* con)
{
	Initcontact(con);
	printf("ͨѶ¼�����\n");
}


void STcontact(struct contact* con)
{
	if (con->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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
	printf("����ɹ�\n");
}

