/*switch_way*/
#include <stdio.h>
int main()
{
	int x,judge;
	float tax;
	scanf("%d",&x);
	judge=x/1000;
	switch(x)
	{
		case 0:
			{
				tax=0;
				break;
			}
		case 1:
			{
				tax=x*0.05;
				break;
			}
		case 2:
			{
				tax=x*0.1;
				break;
			}
		case 3:
			{
				tax=x*0.15;
				break;
			}
		case 4:
			{
				tax=x*0.2;
				break;
			}
		case 5:
			{
				tax=x*0.25;
				break;
			}
		default:
			{
				tax=x*0.25;
				break;
			}
	}
	printf("%f",1.0*x-tax);
	return 0;
}
