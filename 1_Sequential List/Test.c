// ����˳���

#include "SeqList.h"

void slTest01()
{
	SL sl;
	SLInit(&sl);

	// ����β��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);// ctrl + d ���ٸ���
	SLPrint(&sl);// 1 2 3 4
	// ͷ��
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);
	SLPrint(&sl);// 7 6 5 1 2 3 4

	// βɾ
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);// 1 2
	//ͷɾ
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);// 3 4

	// ָ��λ�ò���
	SLInsert(&sl, 0, 100);
	SLPrint(&sl);// 100 1 2 3 4
	SLInsert(&sl, sl.size, 200);
	SLPrint(&sl);// 100 1 2 3 4 200
	// ָ��λ��ɾ��
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
	SLPushBack(&sl, 4);// ctrl + d ���ٸ���
	SLPrint(&sl);// 1 2 3 4

	// ���Բ���
	int ret = SLFind(&sl, 3);
	if (ret == -1)
	{
		printf("���ݲ����ڣ�����ʧ�ܣ�");
	}
	else
		printf("�����ҵ��ˣ����±�Ϊ %d λ��\n", ret);// 2
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


