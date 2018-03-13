#include <stdio.h>

int main() 
{
	int l,r,s,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		s=l;
	}
	else
	{
		s=r;
	}
	for(i=2;i<=s;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
