#include <stdio.h>
int main()
{
    int a,b[10],i,j;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
      b[i]=a%10; 
    }
    for(i=0;i<5;i++)
    {
      if(b[i]==b[i+1]||b[i]==b[i+2]||b[i]==b[i+3]||b[i]==b[i+4])
      {j++;}
    }
    printf("%d",j);
    return 0;
}
