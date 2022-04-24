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
void Initcontact(struct contact* con);//初始化通讯录
void Addcontact(struct contact* con);//添加成员
void Displaycontact(const struct contact* con);//显示通讯录
void Delcontact( struct contact* con);//删除通讯表
void Searchcontact(const struct contact* con);//查找通讯表
void Modifycontact(struct contact* con);//修改通讯表
void Sortcontact(struct contact* con);//排序通讯表