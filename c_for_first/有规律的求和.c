  #include<stdio.h>    //��1��1/2+1/3-1/4...+1/100�ĺ�
        int main ()
        {
            int i=1;
            double a=1.00,sum=0;
            for(;i<101;)
            {
                    for (;i%2!=0;i++)      //������/��Ӧ�õ���%����Ȼ����ѭ���޽��
                        sum=sum+a;
                        a=-1/((1/a)+1);
                    for (;i%2==0;i++)
                        sum=sum+a;
                        a=1/((-1/a)+1);
            }
        printf("�����");
        printf("%lf",sum);
        return 0;
        }
