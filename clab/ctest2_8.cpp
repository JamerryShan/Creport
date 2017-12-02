#include <stdio.h>
#include <string.h>
void reverse (char s[]);
int main()
{
	char a[100];
	int i=0;
	while((a[i++]=getchar())!='\n');
	a[i]='\0';
	reverse(a);
	puts(a);
	return 0;
}
void reverse (char s[])
{
    int t,i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
        t=s[i];s[i]=s[j];s[j]=t;
	}
}
