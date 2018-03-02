#include<stdio.h>
void main()
{
int n,k,a[10],i,j;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=k-1;j<n;j++)
{
printf("%d ",a[j]);
}
for(i=0;i<=k-2;i++)
{
printf("%d ",a[i]);
}
}

