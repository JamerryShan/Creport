#include "stdio.h"
float sum_fac(int n);
int main(void)
{
    int k,n;
    scanf("%d",&n);
    printf("%f",sum_fac(n));
    return 0;
}
float sum_fac(int n)
{
    float s=0;
    int i;
    float fac=1.0;
    for (i=1;i<=n;i++)
	{    fac*=i;
	     s+=(1/fac);
	}
    return s;
}
