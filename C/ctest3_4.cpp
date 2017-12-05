#include<stdio.h>
#include<math.h>
int is_prime(int i);
int main(void)
{
	int is_prime(int);
	int x,i,j;
	printf("please enter a number(>=4):\n");
	scanf("%d",&x);
	j=x/2;
	for (i=2;i<=j;i++)
	{
		if (is_prime(i)&&is_prime(x-i))
		{
			printf("%d=%d+%d\n",x,i,x-i);
			break;
		}
	}
	return 0;
}
int is_prime(int i)
{
	int m=sqrt(i);
	int j;
	for (j=2;j<=m;j++)
	{
		if (!(i%j)) break;
	}
	if (j==m+1) return 1;
	else return 0;
}
