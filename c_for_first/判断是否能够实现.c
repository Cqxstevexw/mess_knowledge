#include<stdio.h>                  //     ���⣺�۲��ұ߳����Ƿ���ʵ��         -1   (x<0)       ����x���õ�yֵ
int main ()                       //                                       Y={  0   (x=0)
{                                //                                             1   (x>0)
    int x,y;
    printf("enter x:");
    scanf("%d",x);
    y=-1;
    if(x!=0)
        if(x>0)
        y=1;
    else
      y=0;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
