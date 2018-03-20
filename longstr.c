#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50],b[50];
	int m,n;
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		printf("\n%s",a);
	}
	else if(n>m)
	{
		printf("\n%s",b);
	}
	else
	{
		printf("\n %s",b);
	}
	return 0;
}
