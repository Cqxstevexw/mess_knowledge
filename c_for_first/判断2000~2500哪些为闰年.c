            #include <stdio.h>          //���2000~2500��������
             int main()
             {
                 int i=2000;
                for (;i<2501;i++)
                    if((i%4==0&&i%100!=0)||(i%400==0))
                      printf("%d ",i);
                return 0;
             }
