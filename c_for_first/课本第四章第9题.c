#include<stdio.h>       //题意：输入一个不大于五位数的正数，要求⑴输出它是几位数，⑵分别输出每一位数字，⑶再按逆序输出数字。
int main()
{
    int a,b,c,d,e,f;
    printf("输入一个不大于五位数的正数\n");
    scanf("%d",&a);
    if(0<a&&a<10)printf("这个数是一位数\n");
    if(9<a&&a<100)printf("这个数是二位数\n");                          //9<a&&a<100不能码成9<a<100,计算机没有办法识别
    if(99<a&&a<1000)printf("这个数是三位数\n");
    if(999<a&&a<10000)printf("这个数是四位数\n");
    if(a>9999)printf("这个数是五位数\n");
    b=a/10000;
    c=(a-b*10000)/1000;
    d=(a-b*10000-c*1000)/100;
    e=(a-b*10000-c*1000-d*100)/10;
    f=(a-b*10000-c*1000-d*100-e*10);
    if(9999<a)printf("输入的数字依次为%d %d %d %d %d\n",b,c,d,e,f);
    if(999<a&&a<10000)printf("输入的数字依次为%d %d %d %d\n",c,d,e,f);
    if(99<a&a<1000)printf("输入的数字依次为%d %d %d\n",d,e,f);
    if(9<a&&a<100)printf("输入的数字依次为%d %d\n",e,f);
    if(a<10)printf("输入的数字依次为%d\n",f);
    if(b!=0)printf("逆序输出是%d%d%d%d%d\n",f,e,d,c,b);                          //b==o&&c==0&&d!=0不能码成b==c==0&&d!=0
    if(b==0&&c!=0)printf("逆序输出的是%d%d%d%d\n",f,e,d,c);
    if(b==0&&c==0&&d!=0)printf("逆序输出是%d%d%d\n",f,e,d);
    if(9<a&&a<100)printf("逆序输出是%d%d",f,e);
    if(a<10)printf("逆序输出是%d",a);
    return 0;
}
