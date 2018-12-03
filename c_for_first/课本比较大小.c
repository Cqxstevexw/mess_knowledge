        #include<stdio.h>                   //输出2个不同的数，输出比较大的数
            int main()
                {
                    int min (int x,int y);                                 //必须定义x,y.不然总没办法实现
                    int a,b,c;
                    scanf("%d,%d",&a,&b);
                    c=max(a,b);
                    printf("比较大的数是%d",c);
                    return 0;
                }
            int max (int x,int y)
                {
                    int z;
                    if(x>y) z=x;
                    else z=y;
                    return(z);
                }


