#include<stdio.h>                       //��Ԫһ�η���aX+bY+c=0,����a,b,c��ֵ�����������
#include<math.h>               //������ѧ����
int main()
{
  double a,b,c,disc,x1,x2,p,q;
  scanf("%lf%lf%lf",&a,&b,&c);
  disc=pow(b,2)-4*a*c;                      //�˷���Ҫ���ú�����math��Ȼ��pow(x,y)����x�ǵ���,y��ָ��
  if(disc>=0)
    {
        p=-b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x1=p+q,x2=p-q;
        printf("x1=%2.7f\nx2=%-2.7f\n",x1,x2);   //%2.7f������룬�Ӹ������Ҷ��룬2��С����ǰ����2λ��
    }
   else                                          //7��С�������7λ����Ϊ˫���ȵ������ֲ���
    printf("�޽�\n");
  return 0;
}
