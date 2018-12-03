#include<stdio.h>
int swap1(int x,int y)
  {
      int tem;
      tem=x;
      x=y;
      y=tem;
      printf("%d,%d\n",x,y);
  }

int main()
{
    int swap1(int x,int y);
    int a=1,b=2;
    swap1(a,b);
    printf("%d %d",a,b);
    return 0;
}
