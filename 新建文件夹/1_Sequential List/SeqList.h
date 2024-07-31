#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
// 定义顺序表的结构，顺序表要实现的接口/方法
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

// 静态顺序表
//#define N 100
//struct SeqList
//{
//	int a[N];// 空间大小
//	int size;// 有效数据的个数
//};
// 缺陷：给定的数组长度，若不够，会导致后续的数据保存失败 -- 数据丢失 -- 非常严重的技术事故！！！
//给多了，会导致空间大量的浪费

typedef int SLDataType;

// 动态顺序表 -- 按需申请
typedef struct SeqList
{
	SLDataType* arr;// 存储数据的底层结构
	int capacity;// 记录顺序表的空间大小
	int size;// 记录顺序表当前有效的数据个数 
}SL;

// 初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);// 保持接口一致性

// 顺序表的尾部/头部插入
void SLPushBack(SL* ps, SLDataType x);// 尾插 
/*
* 空间足够：直接插入
* size在空的位置对应的下标
* arr[size] = x;
*
* 空间不够：扩容
* 扩容的原则：
* {
*	一次扩充一个空间：插入一个元素还不会造成空间浪费 -- realloc(程序执行效率低下)
*	一次阔从扩容固定个大小的空间（10，100...)（小了造成频繁扩容，大了造成空间浪费）
*	成倍数的增加（1.5倍、2倍）
* }
* 数据插入的越多，扩容的大小越来越大
*/
void SLPushFront(SL* ps, SLDataType x);// 头插（把原数据往后移，在开头插入数据）

// 顺序表的尾部/头部删除
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

// 指定位置之前插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
// 删除指定位置数据
void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);


