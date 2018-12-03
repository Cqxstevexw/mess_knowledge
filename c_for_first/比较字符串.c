#include<stdio.h>               //比较2个字符串的大小
int main ()
{
    char a[10]={"zhina"},b[10]={"kjzhfevij"};           // 记得加大括号和双引号
    if(strcmp(a,b)>0)                                   //不能写成strcmp(a,b)>0
        printf("yes");
        else printf(" no");
    return 0;
}
