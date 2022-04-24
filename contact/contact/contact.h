#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum menu
{
	EXIT,
	DEL,
	ADD,
	SEARCH,
	MODIFY,
	DISPLAY,
	SORT
};
enum peoinfonum
{
	name_num = 20,
	tele_num = 12,
	addr_num = 30,
	sex_num = 5,
	con_num = 3
};
struct peoinfo
{
	char name[name_num];
	int age;
	char tele[tele_num];
	char addr[addr_num];
	char sex[sex_num];
};
struct contact
{
	int capacity;
	int size;
	struct peoinfo* date;
};
void Initcontact(struct contact* con);//��ʼ��ͨѶ¼
void Addcontact(struct contact* con);//��ӳ�Ա
void Displaycontact(const struct contact* con);//��ʾͨѶ¼
void Delcontact( struct contact* con);//ɾ��ͨѶ��
void Searchcontact(const struct contact* con);//����ͨѶ��
void Modifycontact(struct contact* con);//�޸�ͨѶ��
void Sortcontact(struct contact* con);//����ͨѶ��