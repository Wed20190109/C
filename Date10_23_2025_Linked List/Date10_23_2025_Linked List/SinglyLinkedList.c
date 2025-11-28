#include "SinglyLinkedList.h"

node* CreateNode(DataType data)
{
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void SLLPrint(node* head)
{
	assert(head);
	node* cur = head;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLLPushBack(node** head, DataType data)
{

	node* newNode = CreateNode(data);//Create a new node
	if (*head == NULL)//Judege if the liit is empty
	{
		*head = newNode;//Just make newNode the *head
	}
	else///If the list is not empty
	{
		node* cur = *head;//
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

void SLLPopBack(node** head)
{
	assert(*head && head);
	if ((*head)->next == NULL)//"->" has higher priority than "*",so we need to use parentheses here
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		node* cur = *head;
		node* lastone = cur;
		while (cur->next)
		{
			lastone = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;
		lastone->next = NULL;
	}
}


void SLLPopFront(node** head)//Head its type is "**"//传过来的是 &? 是指针，需要二级指针接受,head这个单词本身就代表了二级指针
{
	assert(head && *head);
	node* next = (*head)->next;
	free(*head);
	*head = next;
}


void SLLPushFront(node** head, DataType data)
{

	node* newNode = CreateNode(data);
	newNode->next = *head;
	newNode->data = data;
	*head = newNode;
}

node* SLLFind(node* head, DataType tofind)//仅仅找到第一个符合条件的节点就返回
{
	node* cur = head;
	while (cur)
	{
		if (cur->data == tofind)
		{
			return cur;
		}
		cur = cur->next;
	}

	return NULL;
}

node* SLLDestroy(node** head)
{
	assert(head && *head);
	node* cur = *head;
	while (cur)
	{
		node* next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;
}

node* SLLInsertForward(node** head, node* pos, DataType toinsert)//考虑到向前插入会有头插，所以需要传*head
{
	assert(head && *head && pos);
	node* newNode = CreateNode(toinsert);
	node* prev = *head;
	if (pos == *head)
	{
		SLLPushFront(head, toinsert);
	}
	else {
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newNode->next = pos;
		prev->next = newNode;
	}

}

node* SLLInsertBackward(node* pos, DataType toinsert)
{
	assert(pos);
	node* newNode = CreateNode(toinsert);
	/*
	pos->next = newNode;
	newNode->next = pos->next;
	*///Thos is is wrong, because after the first line,pos->next is changed,so the second line is wrong
	newNode->next = pos->next;
	pos->next = newNode;
}

node* SLLErase(node** head, node* pos)
{
	assert(pos);
	node* prev = *head;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;

}

node* SLLEraseBackward(node* pos)
{
	assert(pos && pos->next);
	node* tmp = NULL;
	tmp = pos->next;
	pos->next = tmp->next;
	free(tmp);
	tmp = NULL;
}