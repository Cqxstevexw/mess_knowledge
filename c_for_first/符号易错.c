#include<stdio.h>
int main()
{
    int i=5;
    i+=i+++-i++;                //��i����-i,�����i���
    printf("%d",i);             //�������֮��i����Ӽ�
    return 0;
}
