#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
//四个需要把握的函数
/*
malloc

free:专⻔是⽤来做动态内存的释放和回收的

calloc

realloc

*/
//malloc函数:开辟动态内存
//int main()
//{
//	int *p;
//	p = NULL;
//	p = (int*)malloc(5 * sizeof(int));
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int o = 0; o < 5; o++)
//	{
//		printf("%zd ", *(p + o));
//	}
//	free(p);
//	p = NULL;
//}



////calloc函数使用格式> void* calloc (size_t num, size_t size)
////与malloc函数的区别:会在返回地址之前把申请的空间的每个字节初始化为全0
//int main()
//{
//	int* p;
//	p = NULL;
//	p = (int*)calloc(5, sizeof(int));
//	for (int i = 0; i < 5; i++)
//	{
//			*(p + i) = i;
//	}
//	/*
//	*p=i;
//	p++;
//	勿用这种格式，会造成p初始地址位移
//	*/
//		for (int o = 0; o < 5; o++)
//	{
//		printf("%zd ", *(p + o));
//	}
//		
//	free(p);
//	p = NULL;
//}


//realloc函数:扩容内存
