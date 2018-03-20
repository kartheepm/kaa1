#include <stdio.h>
int main()
{
    int i,a,j,k;
    char b[10];
    scanf("%s",&b);
    scanf("%d",&a);
    k=strlen(b);
    for(i=0;i<a;i++)
    {
    for(j=0;j<k;j++)
    {printf("%c",b[j]);}
printf("\n");
    }
    return 0;
}
