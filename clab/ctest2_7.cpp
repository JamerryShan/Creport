#include<stdio.h>
#define n 10
#define size n*(n+1)/2
int main()
{
    int *p[n],a[size],sum=0,i,j,k;
    for(i=0;i<n;i++)
    {
        p[i]=&a[sum];
        sum+=i+1;
    }
    for(i=0;i<n;i++)
	{
        *p[i]=1;
        *(p[i]+i)=1;
	}
        for(i=2;i<n;i++)
            for(k=1;k<i;k++)
                *(p[i]+k)=*(p[i-1]+k-1)+*(p[i-1]+k);
                for(i=0;i<n;i++)
				{
                    for(j=n-1;j>i;j--)
                    printf("  ");
                    for(k=0;k<=i;k++)
                    printf("%4d",*(p[i]+k));
                    printf("\n");
				}
	return 0;
}
