#include<stdio.h>      //���⣬����abcd���õ���Ӧ�����ַ�Χ
int main ()
{
    char grade;
    printf("����ѡ��\n");
     scanf("%c",&grade);             //��û��&�������û�취���У����ǿ��Ա���
    switch(grade)
    {
       case 'a':printf("1~10\n");break;
       case 'b': printf("11~20\n");break;           //switch case ����Ǵ����������俪ʼ������������break���ʹ��
       case 'c':printf("21~30\n");break;            //���������һ��printf("11~20\n");break;û���˵Ļ�����ô�������b,
       case 'd':printf("31~40\n");break;                                         //�ͻ�ֱ�����c��һ��
       default:printf("enter data error!\n");
    }
    return 6;
}
