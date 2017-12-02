#include <stdio.h>

int main()
{
	int s,i,fac;
	scanf("%d",&s);
	i=1;fac=i;
	if (s==1) printf("%d",s);
	else
	{
	while(fac<s)
	{
		fac=fac*(i++);
	}
	printf("%d",i-1);}
	return 0;
}
/*int factorial(int n)
{
    int i=1,s = 1;
    while (i <=n)
    {
        s*=i;
        i++;
    }
    return s;
}
int main()
{
    int s,i;
    printf("Please enter a number S:\n");
    scanf("%d",&s);
    i=1;
    while(factorial(i)<s)
        i++;
    printf("n=%d\n",i);
    return 0;
} */
