#pragma once
#pragma once

#define GENDER_MAX 10
#define NAME_MAX 20
#define ADDRESS_MAX 50
#define PHONE_MAX 15
typedef struct PersonalInfomation
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char phone[PHONE_MAX];
	char address[ADDRESS_MAX];
}PI;


typedef struct SeqList TXL;//Rename SeqList to TXL for better readability in this context



void AddressBookInit(TXL* e);
void AddressBookDelete(TXL* e);
void AdressBookAdd(TXL* e);
void AddressBookShow(const TXL* e);

void AddressBookFind(const TXL* e);
void AddressBookModify(TXL* e);

