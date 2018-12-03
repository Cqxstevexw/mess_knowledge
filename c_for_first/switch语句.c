#include<stdio.h>      //题意，输入abcd，得到对应的数字范围
int main ()
{
    char grade;
    printf("输入选项\n");
     scanf("%c",&grade);             //若没有&，则后面没办法运行，但是可以编译
    switch(grade)
    {
       case 'a':printf("1~10\n");break;
       case 'b': printf("11~20\n");break;           //switch case 语句是从你输入的语句开始，读至完必须和break配合使用
       case 'c':printf("21~30\n");break;            //如果后面这一句printf("11~20\n");break;没有了的话，那么如果输入b,
       case 'd':printf("31~40\n");break;                                         //就会直接输出c这一句
       default:printf("enter data error!\n");
    }
    return 6;
}
