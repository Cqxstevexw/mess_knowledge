            #include <stdio.h>          //输出2000~2500闰年的年份
             int main()
             {
                 int i=2000;
                for (;i<2501;i++)
                    if((i%4==0&&i%100!=0)||(i%400==0))
                      printf("%d ",i);
                return 0;
             }
