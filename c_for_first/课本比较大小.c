        #include<stdio.h>                   //���2����ͬ����������Ƚϴ����
            int main()
                {
                    int min (int x,int y);                                 //���붨��x,y.��Ȼ��û�취ʵ��
                    int a,b,c;
                    scanf("%d,%d",&a,&b);
                    c=max(a,b);
                    printf("�Ƚϴ������%d",c);
                    return 0;
                }
            int max (int x,int y)
                {
                    int z;
                    if(x>y) z=x;
                    else z=y;
                    return(z);
                }


