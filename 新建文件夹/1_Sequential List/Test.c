// 测试顺序表

#include "SeqList.h"

void slTest01()
{
	SL sl;
	SLInit(&sl);

	// 测试尾插
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);// ctrl + d 快速复制
	SLPrint(&sl);// 1 2 3 4
	// 头插
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);
	SLPrint(&sl);// 7 6 5 1 2 3 4

	// 尾删
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);// 1 2
	//头删
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);// 3 4

	// 指定位置插入
	SLInsert(&sl, 0, 100);
	SLPrint(&sl);// 100 1 2 3 4
	SLInsert(&sl, sl.size, 200);
	SLPrint(&sl);// 100 1 2 3 4 200
	// 指定位置删除
	SLErase(&sl, 0);
	SLPrint(&sl);// 2 3 4
	SLErase(&sl, sl.size - 1);
	SLPrint(&sl);// 2 3 
	/*SLInsert(&sl, sl.size, 200);
	SLprint(&sl);*/
}

void slTest02()
{
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);// ctrl + d 快速复制
	SLPrint(&sl);// 1 2 3 4

	// 测试查找
	int ret = SLFind(&sl, 3);
	if (ret == -1)
	{
		printf("数据不存在，查找失败！");
	}
	else
		printf("数据找到了，在下标为 %d 位置\n", ret);// 2
}

void slTest03()
{
	SL sl;
	SLInit(&sl);
	SLDestroy(&sl);
}
int main()
{
	slTest01();
	slTest02();
	slTest03();
	return 0;
}


