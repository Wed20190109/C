#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*

⽂件在读写之前应该先打开⽂件，在使⽤结束之后应该关闭⽂件。
在编写程序的时候，在打开⽂件的同时，都会返回⼀个FILE*的指针变量指向该⽂件，也相当于建⽴了
指针和⽂件的关系。
ANSI C规定使⽤
fopen
函数来打开⽂件，
fclose
来关闭⽂件。
关闭后需要把流指针置为空

*/

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
///*
//"r"操作若对不存在的文件作用则会报错
//*/
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fputc输出数据到文件内//也可以使用循环来输入
//	fputc('b', pf);
//
//
//	//关闭文件
//	int fclose(pf);
//	pf = NULL;
//	return 0;
//}


///*
//fgetc
//接受参数类型:int fgetc ( FILE * stream );
//*/
//int main()
//{
//	FILE* pf2 = fopen("test.txt", "r");
//	if (pf2 == NULL)
//	{
//		perror("fopen");
//		return 1;
//
//	}
//	//从文件输入数据到目标内
//	int ch=fgetc(pf2);
//	printf("%c",ch);
//	//关闭文件
//	int fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}


/* fgets 与 fputs
①fgets:
接受参数类型与格式:char * fgets ( char * str, int num, FILE * stream );//只能读取到(num-1)个字符

和

②fputs:
接受参数类型与格式:int fputs ( const char * str, FILE * stream );

*/

////fputs
//int main()
//{
//	FILE* pf3 = fopen("test.txt", "w");
//	if (pf3 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdefeg", pf3);
//	fclose(pf3);
//	return 0;
//}



////fgets
//int main()
//{
//	FILE* pf4 = fopen("test.txt", "r");
//	if (pf4== NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[100];//需创建一个存放从流文件输入进来的数组，类型为char
//	char ch = fgets(arr, 5, pf4);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	fclose(pf4);
//	pf4 = NULL;

//}




/*fscanf 与 fprintf
fscanf:接受参数类型与格式:int fscanf ( FILE * stream, const char * format, ... );
	区别scanf:            int scanf ( const char * format, ... );
作用:格式化从流文件中读取数据
和

fprintf:接受参数类型与格式:int fprintf ( FILE * stream, const char * format, ... );
	区别printf:            int printf ( const char * format, ... );
作用:格式化输入数据到流文件
*/


////fprintf
//int main()
//{
//	FILE* pf5 = fopen("test2.txt", "w");
//	if (pf5 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf5, "%d %c", 6, 'b');
//
//	fclose(pf5);
//	pf5 = NULL;
//}


//int main()
//{
//
//	FILE* pf6 = fopen("test2.txt", "r");
//	if (pf6 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int x = 0;
//	char arr[6];
//	fscanf(pf6, "%d %c", &x, &arr);
//	printf("%d %c",x, arr);
//	return 0;
//}

/*sscanf和sprintf
sscanf:
与
sprintf:
*/

/* fseek, ftell, rewing

fseek:
接受参数类型与格式:int fseek ( FILE * stream, long int offset, int origin );

ftell:
接受参数类型与格式:

rewind:
接受参数类型与格式:
*/




int main()
{
	FILE* pf7 = fopen("test.txt", "r");
	if (pf7 == NULL)
	{
		perror("fopen");
		return 1;
	}

	fclose(pf7);
	pf7 = NULL;
}