#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//#include "SeqList.h" /* ͷ�ļ�Ƕ������ ���������ǰ������ */

#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 100

// ͨѶ¼��������
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

// ʹ��˳����ǰ������
struct SeqList;
typedef struct SeqList Contact;

// ͨѶ¼�ĳ�ʼ��������
void ContactInit(Contact* pcon);// ʵ�ʳ�ʼ���Ļ���˳���
void ContactDestroy(Contact* pcon);

// ���ӡ�ɾ�����޸ġ����ҡ��鿴ͨѶ¼
void ContactAdd(Contact* pcon);
void ContactDel(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);
void ContactShow(Contact* pcon);


