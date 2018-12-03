#include<stdio.h>              //猜输出的c1,c2是什么
int main()
{
    char c1,c2;
    c1=256;                                 //char的类型是占一个字节，8个bit,从-128~127超过的就以补码的形式去算，
    c2=198;                                  //有效字符是0~127，超过的话就不可预料
    printf("c1=%c,c2=%c\n",c1,c2);             //,因为char是1字节,int是4字节
    printf("c1=%d,c2=%d\n",c1,c2);              //如果你使用超过255的数字给char赋值,实际是用int的最后一字节给了char,就是对数字取2
    return 0;                                  //56的余数.比如char a;a=256+65;a还是65即A.这样char赋值有warning.
}
