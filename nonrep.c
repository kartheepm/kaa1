#include <stdio.h>

int main() 
{
	int n,i,j;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				c=c+1;	
			}
			
		}
	if(c==0)
	{
		printf("%d",a[i]);
	}
	}

	
	
	return 0;
}
