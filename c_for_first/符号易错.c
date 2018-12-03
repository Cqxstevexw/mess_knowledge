#include<stdio.h>
int main()
{
    int i=5;
    i+=i+++-i++;                //先i加上-i,其差与i相加
    printf("%d",i);             //这里加完之后，i还需加加
    return 0;
}
