#include <stdio.h>
int main() 
{
	int a,i,j,b=1;
	scanf("%d",&a);
	for(j=2;j<=a;j++)
	{
		if(a%j==0)
		{
			b=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			b=0;
			break;
			}
			}
		
	
	if(b==1)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
