#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
/*
memcpy
memmove
memset:用来设置内存，将内存中的值以字节为单位设置成想要的内容
memcmp
*/

//memcpy:对内存块进行拷贝;此函数遇到'\0'不会停止
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	memcpy(arr2, arr1, 20);
//		for (int i = 0; i < 20; i++)
//		{
//			printf("%d ", arr2[i]);
//		}
//}

//自制memcpy
/*
void *my_version_memcpy(void* destination, void* source, size_t num)
{
	void *ret = destination;
	int i = 0;
	while (num--)
	{
		*(char*)destination = *(char*)source;
		source=(char*)source+1;
		destination = (char*)destination + 1;
	}
	return ret;
}
int main()
{
int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
int arr2[30] = { 0 };
void *ret=my_version_memcpy(arr2, arr1, 20);
for (int i = 0; i < 20; i++)
{
	printf("%d ", arr2[i]);
}
}
*/