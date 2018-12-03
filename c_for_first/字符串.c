#include<stdio.h>
int main()
{
char c[10]={"yfkt\0jyd"};           //这里因为提前有了\0导致后面的yvd没办法输出,但是\0不等于空格键
printf("%s",c);
return 0;
}
