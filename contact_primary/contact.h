#define _CRT_SECURE_NO_WARNINGS 1


//头文件
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


//预定义
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define MAX 100
#define ADD_MAX 20


//功能
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人


enum function
{
	EXIT,//0
	ADD,//1
	DEL,//2
	MODIFY,//3
	DISPLAY,//4
	CLEAR,//5
	SORT//6
};


struct peoinfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char address[ADD_MAX];
};


struct contact
{
	struct peoinfo date[MAX];
	int sz;
};


void Initcontact(struct contact*con);//初始化

void DIScontact(struct contact* con);//显示通讯录内容

void ADDcontact(struct contact* con);//添加联系人

void DELcontact(struct contact* con);//删除联系人

void MODcontact(struct contact* con);//修改联系人

void CLcontact(struct contact* con);//清空通讯录

void STcontact(struct contact* con);//按名字排序通讯录

int Findperson(struct contact* con,char *name);//内部查找函数



