#include "SeqList.h" 

// ͨѶ¼�˵�
void menu()
{
	printf("\n-----------------ͨѶ¼-----------------\n");
	printf("-------1.�����ϵ��  2.ɾ����ϵ��-------\n");
	printf("-------3.�޸���ϵ��  4.������ϵ��-------\n");
	printf("-------5.�鿴ͨѶ¼  0.  ��  ��  -------\n");
	printf("----------------------------------------\n");
}

// ����ͨѶ¼
void test()
{
	Contact con;
	ContactInit(&con);
	ContactAdd(&con);
	ContactAdd(&con);
	ContactAdd(&con);
	ContactDestroy(&con);
}

int main()
{
	int op = -1;
	// ����ͨѶ¼�ṹ����
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("��ѡ�����Ĳ���:\n");
		scanf("%d", &op);

		switch (op)
		{
		case 1:
			// �����ϵ��
			ContactAdd(&con);
			break;
		case 2:
			// ɾ����ϵ��
			ContactDel(&con);
			break;
		case 3:
			// �޸���ϵ��
			ContactModify(&con);
			break;
		case 4:
			// ������ϰ��
			ContactFind(&con);
			break;
		case 5:
			// �鿴ͨѶ¼
			ContactShow(&con);
			break;
		case 0:
			// �˳�ͨѶ¼
			printf("ͨѶ¼�˳���...\n");
			break;
		default:
			break;
		}

	} while (op != 0);
	// ����ͨѶ¼
	ContactDestroy(&con);
	return 0;
}


