/*
#include<stdio.h>

#define max(x,y)   ((x)>(y)?(x):(y))        //宏定义，有带函数的
#define W(n)        printf("%d\n",n);
#define debug 1

//#line 37								//将后续的行(即这里是从第8行开始被重新编号)编号被，37,38,39....
#line 1 "Hello.cpp"                     //改变行号并且改变__FILE__的文件名

//#import "filename" [attributes]       导入库，路径和属性（可以多个或没有属性，用空格或逗号隔开）
//#import "c:\path\typelib0.tlb"
//#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only  

//#pragma message( "Pentium processor build" )打印出Pentium processor build，和#ifdef，#pragma message(），#ednif一起
                                              //配套使用来检查之前有没有定义过那个宏 但是在这里打印不出来
//#pragma once						保证头文件被编译一次

//#pragma region MyRegion

//#pragma endregion


#ifdef debug							//如果debug有被定义，就执行#define debugg 1，没有的就执行#else后面的语句
#define debugg 1						//#ifndef表示若果没有被定义
//#error  there is error        如果执行这一条语句，会生成一个编译错误消息"there is error"，并停止编译
//#warning  there is error		如果执行这一条语句，会生成一个编译错误消息"there is error"，但不会停止编译
//不过vs使用warning会出错，应该是编译器的问题,因为没有定义

#else
#define debu
#error there is error
#endif									//结束ifdef

int main()
{
	//    #if defined debug      //defined，如果debug已经被定义过了，使用defined就会返回1，否则返回0

#if  debugg                             //当debugg为0 的时候会删除 #if debug 和#endif之间的东西
	int i = max(5 + 3, 12 - 5);			//还有#if #elif #else的配合使用 和Python一样

	W(i);
	printf("Date : %s\n", __DATE__);    //预定义宏，日期
	printf("Time : %s\n", __TIME__);    //预定义宏，时间
	printf("File : %s\n", __FILE__);    //预定义宏，文件名
	printf("Line : %d\n", __LINE__);    //预定义宏，被编译的文件中的行号
//	printf("STDC : %d\n", __STDC__);    //预定义宏，如果编译器符合标准，输出值为1
	printf("func : %s\n", __func__);    //预定义宏，知道是位于哪个函数
#endif

	while (1);						
	return 0;

}
*/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	int i, j, e;
	int a;
	long time;
	for (i = 1, a = I;i<I / 2;i++, a--)
	{
		for (j = (int)(I - sqrt(I*I - (a - i)*(a - i)));j>0;j--)
			printf(" ");
		for (e = 1;e <= 2 * sqrt(I*I - (a - i)*(a - i));e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I*I - (a - i)*(a - i))));j>0;j--)
			printf(" ");
		for (e = 1;e <= 2 * sqrt(I*I - (a - i)*(a - i));e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1;i<80;i++)
	{

		printf("\3");
	}
	printf("\n");
	for (i = 1;i <= R / 2;i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R*R - i*i));j>0;j--)
			printf(" ");
		for (e = 1;e <= 2 * (sqrt(R*R - i*i) - (R - 2 * I));e++)
			printf("\3");
		printf("\n");
	}

	for (; ; )
	{
		system("color a");
		for (time = 0;time<99999999;time++); system("color b");
		for (time = 0;time<99999999;time++); system("color c");
		for (time = 0;time<99999999;time++); system("color d");
		for (time = 0;time<99999999;time++); system("color e");
		for (time = 0;time<99999999;time++); system("color f");
		for (time = 0;time<99999999;time++);
		system("color 0"); for (time = 0;time<99999999;time++);
		system("color 1"); for (time = 0;time<99999999;time++);
		system("color 2"); for (time = 0;time<99999999;time++);
		system("color 3"); for (time = 0;time<99999999;time++);
		system("color 4");
		for (time = 0;time<99999999;time++); system("color 5");
		for (time = 0;time<99999999;time++); system("color 6");
		for (time = 0;time<99999999;time++); system("color 7");
		for (time = 0;time<99999999;time++); system("color 8");
		for (time = 0;time<99999999;time++); system("color 9");
		for (time = 0;time<99999999;time++); system("color ab");
		for (time = 0;time<99999999;time++); system("color ac");
		for (time = 0;time<99999999;time++); system("color ad");
		for (time = 0;time<99999999;time++); system("color ae");
		for (time = 0;time<99999999;time++); system("color af");
		for (time = 0;time<99999999;time++);
	}
	return 0;
}