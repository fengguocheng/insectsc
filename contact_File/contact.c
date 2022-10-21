#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static void CheckCapacity(struct contact* con);

void Loadcontact(struct contact* con)//����ͨѶ¼
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-5s\t%-5s\t%-3s\t%-14s\t%-10s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	assert(con);
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
		for (i = ret; i < con->sz - 1; i++)
		{
			con->date[i] = con->date[i + 1];
		}
		con->sz--;
		printf("ɾ���ɹ�\n");
	}
}


void MODcontact(struct contact* con)
{
	assert(con);
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
		printf("ͨ��¼Ϊ��\n");
		return;
	}
	printf("��ѡ������ģʽ:> 0.���� 1.���� 2.�Ա� 3.�绰 4.��ַ\n");
	while (1)
	{
		scanf("%d", &input);
		if (input < 4 && input>0)
		{
			qsort(con->date, con->sz, sizeof(struct peoinfo), arr[input]);
			printf("����ɹ�\n");
			return;
		}
		else
		{
			printf("����Ƿ�������������:\n");
		}
	}
}
void Storecontact(struct contact* con)//����ͨѶ¼
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
	printf("ͨѶ¼�ѱ���\n");
}
