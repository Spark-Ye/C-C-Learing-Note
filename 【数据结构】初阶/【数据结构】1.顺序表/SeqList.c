// 具体实现顺序表里定义的接口/方法
#include "SeqList.h"

// 顺序表的初始化和销毁
void SLInit(SL* sl)
{
	sl->arr = NULL;
	sl->size = sl->capacity = 0;
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity = 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);// 动态申请失败，扩容失败直接中断程序
		}
		// 扩容成功
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}
// 顺序表的头部/尾部插入
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);

	// 空间不够，扩容
	SLCheckCapacity(ps);

	// 空间足够， 直接插入
	ps->arr[ps->size++] = x;
}
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	// 判断是否扩容
	SLCheckCapacity(ps);

	// 旧数据往后移动一位
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

// 顺序表的尾部/头部删除
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);

	// 顺序表不为空
	ps->size--;// 把这个数当作看不见
}
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);

	// 不为空执行挪动操作
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

// 指定位置之前插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	// pos 及之后的数据往后挪动一位，pos 空出来
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
// 删除指定位置数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	// pos 以后的数据往前挪动一位
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//在顺序表中查找 x
int SLFind(SL* ps, SLDataType x)
{
	// 加上断言对代码的健壮性更好
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
			return i;// 找到了，返回当前下标
	}
	return -1;// 返回无效下标
}

void SLDestroy(SL* ps)
{
	assert(ps);
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;

	ps->size = ps->capacity = 0;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}


