#include<stdio.h>
int funp(int a,int b);
int main(void)
{
	int i,j;
	printf("please input two numbers:\n");
	scanf("%d %d",&i,&j);
	printf("%d\n",funp(i,j));
}
int funp(int a,int b)
{
	if(a%b==0)
		return b;
	else
		return funp(b,a%b);
}
