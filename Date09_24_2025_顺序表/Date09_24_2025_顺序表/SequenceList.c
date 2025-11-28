#define _CRT_SECURE_NO_WARNINGS 1
#include "SequenceList.h"

void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestroy(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;//确认扩容增量
		DataType* tmp = (DataType*)realloc(ps->a, sizeof(DataType) * newcapacity);//CREAT A NEW MEMORY SPACE
		if (tmp == NULL)//因为realloc失败会返回NULL
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;//所以再把新空间的地址赋值给原来的指针
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* ps, DataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);//检查容量后再插入
	ps->a[ps->size] = x;
	ps->size++;
}

//void SeqListPopBack(SL* ps)
//{
//	assert(ps);
//	ps->a[ps->size - 1] = 0;
//	ps->size--;
//}

void SeqListPushFront(SL* ps, DataType x)
{
	SeqListCheckCapacity(ps);
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

//void SeqListPrint(SL* ps)
//{
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//}

void SeqListInsert(SL* ps, int pos, DataType x)
{
	assert(ps);

	SeqListCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;//Remember to insert the element
	ps->size++;//Remember to increase the size
}

void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;//Remember to decrease the size
}
//int SeqListFind(SL* ps, DataType x)
//{
//	assert(ps);
//	for(int i=0;i<ps->size;i++)
//	{
//		if(ps->a[i]==x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int SeqListGetCapacity(SL* ps)
//{
//
//}
//void SeqListSetCapacity(SL* ps, int capacity)
//{
//
//}
//int SeqListSize(SL* ps)
//{
//
//}
//int SeqListEmpty(SL* ps)
//{
//
//}
//void SeqListRemove(SL* ps, DataType x)
//{ 
//
//}