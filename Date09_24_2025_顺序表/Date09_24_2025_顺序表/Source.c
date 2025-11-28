#include "SequenceList.h"//此处不能用.c,不然会重复定义，之前就因为这个错误调试了好久
#define _CRT_SECURE_NO_WARNINGS 1

//int Test()
//{
//	SL p1;
//	SeqListInit(&p1);
//	SeqListPushBack(&p1, 1);
//	SeqListPushBack(&p1, 2);
//	SeqListPushBack(&p1, 3);
//	SeqListPushBack(&p1, 4);
//	SeqListPushBack(&p1, 5);
//	SeqListPrint(&p1);
//	printf("\n");
//	SeqListPushFront(&p1, -1);
//	SeqListPushFront(&p1, -2);
//	SeqListPushFront(&p1, -3);
//	SeqListPushFront(&p1, -4);
//	SeqListPrint(&p1);
//	printf("\n");
//	SeqListPopFront(&p1);
//	SeqListPrint(&p1);
//	printf("\n");
//	SeqListInsert(&p1, 4, 99);
//	SeqListPrint(&p1);
//	//目前顺序表数据为-4 -3 -2 -1 99 1 2 3 4 5
//	printf("\n");
//	SeqListErase(&p1, 3);
//	SeqListPrint(&p1);
//	printf("\n");
//}
void FinalTest()
{

	TXL e2;
	SeqListInit(&e2);
	int input = 0;

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddressBookAdd(&e2);
			break;
		case 2:
			AddressBookDelete(&e2);
			break;
		case 3:
			AddressBookShow(&e2);
			break;
		case 4:
			AddressBookFind(&e2);
		case 5:
			AddressBookModify(&e2);
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
}


int menu()
{
	printf("+-----------------------------------+\n");
	printf("| 1.Add                 2.Delete    |\n");
	printf("| 3.Show                4.Find      |\n");
	printf("| 5.Modify              0.Exit      |\n");
	printf("+-----------------------------------+\n");
	printf("Please choose an option:\n");
	return;
}


int main()
{

	/*TXL e1;*/
	//分段测试代码
	//SeqListInit(&e1);
	//AddressBookAdd(&e1);
	//AddressBookAdd(&e1);
	//AddressBookShow(&e1);
	///*AddressBookDelete(&e1);
	//AddressBookShow(&e1);*/
	////AddressBookFind(&e1);
	//AddressBookModify(&e1);
	//AddressBookShow(&e1);
	///*Test();*/

	FinalTest();

	return 0;
}