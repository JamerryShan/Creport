#include<stdio.h>
int main()
{
    int a,b,c,d;
    unsigned long x;
    scanf("%lu",&x);
    a=(x&0xff000000)>>24;
    b=(x&0xff0000)>>16;
    c=(x&0xff00)>>8;
    d=(x&0x00ff);
    printf("%d.%d.%d.%d\n",d,c,b,a);
    return 0;
}
