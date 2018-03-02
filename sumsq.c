#include <stdio.h>
int main() 
{
	int a,b=0,c,d;
	scanf("%d",&a);
	while(a!=0)
	{
		d=a%10;
		c=d*d;
		b=b+c;
		a=a/10;
	}
	printf("%d",b);
	return 0;
}
 
