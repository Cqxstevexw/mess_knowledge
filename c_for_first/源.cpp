/*
#include<stdio.h>

#define max(x,y)   ((x)>(y)?(x):(y))        //�궨�壬�д�������
#define W(n)        printf("%d\n",n);
#define debug 1

//#line 37								//����������(�������Ǵӵ�8�п�ʼ�����±��)��ű���37,38,39....
#line 1 "Hello.cpp"                     //�ı��кŲ��Ҹı�__FILE__���ļ���

//#import "filename" [attributes]       ����⣬·�������ԣ����Զ����û�����ԣ��ÿո�򶺺Ÿ�����
//#import "c:\path\typelib0.tlb"
//#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only  

//#pragma message( "Pentium processor build" )��ӡ��Pentium processor build����#ifdef��#pragma message(����#ednifһ��
                                              //����ʹ�������֮ǰ��û�ж�����Ǹ��� �����������ӡ������
//#pragma once						��֤ͷ�ļ�������һ��

//#pragma region MyRegion

//#pragma endregion


#ifdef debug							//���debug�б����壬��ִ��#define debugg 1��û�еľ�ִ��#else��������
#define debugg 1						//#ifndef��ʾ����û�б�����
//#error  there is error        ���ִ����һ����䣬������һ�����������Ϣ"there is error"����ֹͣ����
//#warning  there is error		���ִ����һ����䣬������һ�����������Ϣ"there is error"��������ֹͣ����
//����vsʹ��warning�����Ӧ���Ǳ�����������,��Ϊû�ж���

#else
#define debu
#error there is error
#endif									//����ifdef

int main()
{
	//    #if defined debug      //defined�����debug�Ѿ���������ˣ�ʹ��defined�ͻ᷵��1�����򷵻�0

#if  debugg                             //��debuggΪ0 ��ʱ���ɾ�� #if debug ��#endif֮��Ķ���
	int i = max(5 + 3, 12 - 5);			//����#if #elif #else�����ʹ�� ��Pythonһ��

	W(i);
	printf("Date : %s\n", __DATE__);    //Ԥ����꣬����
	printf("Time : %s\n", __TIME__);    //Ԥ����꣬ʱ��
	printf("File : %s\n", __FILE__);    //Ԥ����꣬�ļ���
	printf("Line : %d\n", __LINE__);    //Ԥ����꣬��������ļ��е��к�
//	printf("STDC : %d\n", __STDC__);    //Ԥ����꣬������������ϱ�׼�����ֵΪ1
	printf("func : %s\n", __func__);    //Ԥ����֪꣬����λ���ĸ�����
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