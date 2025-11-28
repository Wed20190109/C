#include "AddressBook.h"
#include "SequenceList.h"

void AddressBookInit(TXL* e)//相当于(SL*p),传存储结构体的顺序表指针
{

	SeqListInit(e);

}



void AddressBookAdd(TXL* e)
{
	PI info;

	printf("Plese input name:\n");
	scanf("%s", &info.name);
	printf("Plese input gender:\n");
	scanf("%s", &info.gender);
	printf("Plese input age:\n");
	scanf("%d", &info.age);
	printf("Plese input phone:\n");
	scanf("%s", &info.phone);
	printf("Plese input address:\n");
	scanf("%s", &info.address);
	SeqListPushBack(e, info);
	printf("Insert successfully!\n");

}

void AddressBookDelete(TXL* e)
{
	assert(e);
	char name[NAME_MAX];
	printf("Please input the name you want to delete:\n");
	scanf("%s", name);
	for (int i = 0; i < e->size; i++)
	{
		if (strcmp(e->a[i].name, name) == 0)
		{
			SeqListErase(e, i);
			printf("Delete successfully!\n");
			return;
		}
	}
	printf("The name is not found!\n");
}

void AddressBookShow(const TXL* e)
{
	if (e->size == 0)
	{
		printf("The address book is empty!\n");
		return;
	}
	for (int i = 0; i < e->size; i++)
	{
		printf("Name:%s Gender:%s Age:%d Phone:%s Address:%s\n", e->a[i].name, e->a[i].gender, e->a[i].age, e->a[i].phone, e->a[i].address);
	}
}

void AddressBookFind(const TXL* e)
{
	char name[NAME_MAX];
	printf("Please input the name you want to find\n");
	scanf("%s", name);
	for (int i = 0; i < e->size; i++)
	{
		if (strcmp(e->a[i].name, name) == 0)
		{
			printf("Find successfully!\n");
			return;
		}
	}
	printf("The name is not found!\n");
}

void AddressBookModify(TXL* e)//此函数需要考虑好要修改的条目
{
	char name[NAME_MAX];
	printf("Please input the people you want to modify:\n");
	scanf("%s", name);//这里我举例以名字为修改依据
	for (int i = 0; i < e->size; i++)
	{
		if (strcmp(e->a[i].name, name) == 0)
		{
			char newName[NAME_MAX];
			char newGender[GENDER_MAX];
			char newPhone[PHONE_MAX];
			int  newAge;
			char newAddress[ADDRESS_MAX];
			//用strcpy需要考虑长度问题
			printf("Please input new name:\n");
			scanf("%s", newName);
			strcpy(e->a[i].name, newName);
			printf("Please input newa gender:\n");
			scanf("%s", newGender);
			strcpy(e->a[i].gender, newGender);
			printf("Please input new age:\n");
			scanf("%d", &newAge);
			e->a[i].age = newAge;
			printf("Please input new phone:\n");
			scanf("%s", newPhone);
			strcpy(e->a[i].phone, newPhone);
			printf("Please input new address:\n");
			scanf("%s", newAddress);
			strcpy(e->a[i].address, newAddress);
			printf("Modify successfully!\n");
		}
	}printf("The name does not exist!\n");
}
