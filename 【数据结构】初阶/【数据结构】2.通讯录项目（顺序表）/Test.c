#include "SeqList.h" 

// 通讯录菜单
void menu()
{
	printf("\n-----------------通讯录-----------------\n");
	printf("-------1.添加联系人  2.删除联系人-------\n");
	printf("-------3.修改联系人  4.查找联系人-------\n");
	printf("-------5.查看通讯录  0.  退  出  -------\n");
	printf("----------------------------------------\n");
}

// 测试通讯录
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
	// 创建通讯录结构对象
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("请选择您的操作:\n");
		scanf("%d", &op);

		switch (op)
		{
		case 1:
			// 添加联系人
			ContactAdd(&con);
			break;
		case 2:
			// 删除联系人
			ContactDel(&con);
			break;
		case 3:
			// 修改联系人
			ContactModify(&con);
			break;
		case 4:
			// 查找练习人
			ContactFind(&con);
			break;
		case 5:
			// 查看通讯录
			ContactShow(&con);
			break;
		case 0:
			// 退出通讯录
			printf("通讯录退出中...\n");
			break;
		default:
			break;
		}

	} while (op != 0);
	// 销毁通讯录
	ContactDestroy(&con);
	return 0;
}


