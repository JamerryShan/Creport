/*if_way*/
#include <stdio.h>

int main()
{
	int x;
	float tax;
	scanf("%d",&x);
	if(x<1000)
	{
		tax=0;
	}
	else if(x>=1000&&x<2000)
	{
		tax=x*0.05;
	}
	else if(x>=2000&&x<3000)
	{
		tax=x*0.1;
	}
	else if(x>=3000&&x<4000)
	{
		tax=x*0.15;
	}
	else if(x>=4000&&x<5000)
	{
		tax=x*0.2;
	}
	else if(x>=5000)
	{
		tax=x*0.25;
	}
	printf("%f",1.0*x-tax);
	return 0;
}

