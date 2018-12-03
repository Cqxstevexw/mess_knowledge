#include<stdio.h>                       //二元一次方程aX+bY+c=0,输入a,b,c的值，输出解的情况
#include<math.h>               //调用数学函数
int main()
{
  double a,b,c,disc,x1,x2,p,q;
  scanf("%lf%lf%lf",&a,&b,&c);
  disc=pow(b,2)-4*a*c;                      //乘方需要调用函数，math，然后pow(x,y)其中x是底数,y是指数
  if(disc>=0)
    {
        p=-b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x1=p+q,x2=p-q;
        printf("x1=%2.7f\nx2=%-2.7f\n",x1,x2);   //%2.7f是左对齐，加负号是右对齐，2是小数电前保留2位，
    }
   else                                          //7是小数点后保留7位，因为双精度道州体现不出
    printf("无解\n");
  return 0;
}
