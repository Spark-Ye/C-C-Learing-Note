#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>
#include "Contact.h"

typedef Info SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int capacity;
	int size;
}SL;

void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);

void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);


