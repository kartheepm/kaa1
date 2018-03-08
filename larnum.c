#include <stdio.h>
 
int main() 
{
	char a[50],b;
	int i,j,c=1,d=1;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		if(a[i]==a[j])
		{
			c+=1;
			if(c>d)
			{
				d=c;
				b=a[i];
			}
		}
 
	}
	printf("%c",b);
	return 0;
}
