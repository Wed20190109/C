#include "SinglyLinkedList.h"

int SimpleTest()
{
	node* newNode1 = (struct node*)malloc(sizeof(node));
	newNode1->data = 1;
	node* newNode2 = (struct node*)malloc(sizeof(node));
	newNode2->data = 2;
	node* newNode3 = (struct node*)malloc(sizeof(node));
	newNode3->data = 3;
	node* newNode4 = (struct node*)malloc(sizeof(node));
	newNode4->data = 4;
	node* newNode5 = (struct node*)malloc(sizeof(node));
	newNode5->data = 5;
	node* newNode6 = (struct node*)malloc(sizeof(node));
	newNode6->data = 6;

	newNode1->next = newNode2;
	newNode2->next = newNode3;
	newNode3->next = newNode4;
	newNode4->next = newNode5;
	newNode5->next = newNode6;
	newNode6->next = NULL;

	node* cur = newNode1;
	int count = 0;
	while (cur)
	{
		count++;
		printf("The %d Node value is %d\n", count, cur->data);
		cur = cur->next;
	}
	printf("NULL\n ");
	return;
}



int main()
{
	/*SimpleTest();*/
	node* a = NULL;//Remember to initiaize it to NULL,last time I forgot it and got a hard to find bug
	SLLPushBack(&a, 1);
	SLLPushBack(&a, 2);
	SLLPushBack(&a, 3);
	SLLPushBack(&a, 4);
	SLLPushBack(&a, 6);
	SLLPushBack(&a, 7);
	printf("The nodes created at first:\n");
	SLLPrint(a);

	SLLPopBack(&a);
	printf("Nodes after popping back(poped 7):\n");
	SLLPrint(a);

	printf("Nodes after pushing front(pushed 0):\n");
	SLLPushFront(&a, 0);
	SLLPrint(a);

	node* found = SLLFind(a, 3);
	SLLInsertForward(&a, found, 5);//Remember tp print the list after insertion to check if it is correct
	SLLPrint(a);
	SLLInsertBackward(found, 2);
	SLLPrint(a);
	node* found2 = SLLFind(a, 6);
	SLLErase(&a, found2);
	printf("After erasing 6:\n");
	SLLPrint(a);
	node* found3 = SLLFind(a, 3);
	SLLEraseBackward(found);
	printf("After erasing the number behind 3:\n");
	SLLPrint(a);

	return 0;
}