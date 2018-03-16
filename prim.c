#include <stdio.h>

int main() 
{
	int a,i,j,k=1;
	scanf("%d",&a);
	for(j=2;j<=a;j++)
	{
		if(a%j==0)
		{
			k=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			k=0;
			break;
			}
			}
		
	
	if(k==1)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
