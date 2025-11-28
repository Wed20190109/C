#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "AddressBook.h"
#include <string.h>

//typedef int DataType;
typedef PI DataType;

typedef struct SeqList
{
	DataType* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPushBack(SL* ps, DataType x);
void SeqListPrint(SL* ps);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, DataType x);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, DataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, DataType x);
//int SeqListGetCapacity(SL* ps);
//void SeqListSetCapacity(SL* ps, int capacity);
//int SeqListSize(SL* ps);
//int SeqListEmpty(SL* ps);
//void SeqListRemove(SL* ps, DataType x);