#include<stdio.h>
int main ()
{
    int a;
    a=(1+2,3+4,5+6);        //如果没有加括号的话，结果会显示是3
    printf("%d",a);
    return 0;      //逗号运算直接跳到最后一个      ASCll码    a是97,  A是65  0是48          000是空集
}
