#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d,%d",&a,&b);
    max=(a>b)?a:b;                      // max=(a>b)?a:b;�൱��if(a>b),max=a     else   max=b;
    printf("����ֵ��%d",max);
    return 0;
}
