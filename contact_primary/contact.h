#define _CRT_SECURE_NO_WARNINGS 1


//ͷ�ļ�
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


//Ԥ����
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define MAX 100
#define ADD_MAX 20


//����
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��


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


void Initcontact(struct contact*con);//��ʼ��

void DIScontact(struct contact* con);//��ʾͨѶ¼����

void ADDcontact(struct contact* con);//�����ϵ��

void DELcontact(struct contact* con);//ɾ����ϵ��

void MODcontact(struct contact* con);//�޸���ϵ��

void CLcontact(struct contact* con);//���ͨѶ¼

void STcontact(struct contact* con);//����������ͨѶ¼

int Findperson(struct contact* con,char *name);//�ڲ����Һ���



