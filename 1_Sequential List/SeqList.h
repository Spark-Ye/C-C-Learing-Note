#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
// ����˳���Ľṹ��˳���Ҫʵ�ֵĽӿ�/����
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

// ��̬˳���
//#define N 100
//struct SeqList
//{
//	int a[N];// �ռ��С
//	int size;// ��Ч���ݵĸ���
//};
// ȱ�ݣ����������鳤�ȣ����������ᵼ�º��������ݱ���ʧ�� -- ���ݶ�ʧ -- �ǳ����صļ����¹ʣ�����
//�����ˣ��ᵼ�¿ռ�������˷�

typedef int SLDataType;

// ��̬˳��� -- ��������
typedef struct SeqList
{
	SLDataType* arr;// �洢���ݵĵײ�ṹ
	int capacity;// ��¼˳���Ŀռ��С
	int size;// ��¼˳���ǰ��Ч�����ݸ��� 
}SL;

// ��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);// ���ֽӿ�һ����

// ˳����β��/ͷ������
void SLPushBack(SL* ps, SLDataType x);// β�� 
/*
* �ռ��㹻��ֱ�Ӳ���
* size�ڿյ�λ�ö�Ӧ���±�
* arr[size] = x;
*
* �ռ䲻��������
* ���ݵ�ԭ��
* {
*	һ������һ���ռ䣺����һ��Ԫ�ػ�������ɿռ��˷� -- realloc(����ִ��Ч�ʵ���)
*	һ���������ݹ̶�����С�Ŀռ䣨10��100...)��С�����Ƶ�����ݣ�������ɿռ��˷ѣ�
*	�ɱ��������ӣ�1.5����2����
* }
* ���ݲ����Խ�࣬���ݵĴ�СԽ��Խ��
*/
void SLPushFront(SL* ps, SLDataType x);// ͷ�壨��ԭ���������ƣ��ڿ�ͷ�������ݣ�

// ˳����β��/ͷ��ɾ��
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

// ָ��λ��֮ǰ��������
void SLInsert(SL* ps, int pos, SLDataType x);
// ɾ��ָ��λ������
void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);


