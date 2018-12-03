#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d,%d",&a,&b);
    max=(a>b)?a:b;                      // max=(a>b)?a:b;相当于if(a>b),max=a     else   max=b;
    printf("最大的值是%d",max);
    return 0;
}
