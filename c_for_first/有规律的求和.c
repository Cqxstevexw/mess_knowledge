  #include<stdio.h>    //求1—1/2+1/3-1/4...+1/100的和
        int main ()
        {
            int i=1;
            double a=1.00,sum=0;
            for(;i<101;)
            {
                    for (;i%2!=0;i++)      //不能用/，应该得用%，不然无限循环无结果
                        sum=sum+a;
                        a=-1/((1/a)+1);
                    for (;i%2==0;i++)
                        sum=sum+a;
                        a=1/((-1/a)+1);
            }
        printf("结果是");
        printf("%lf",sum);
        return 0;
        }
