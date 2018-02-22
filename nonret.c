#include <stdio.h>
#include <string.h>
int main()
{    int a[100],b, i, j,k=1;
  scanf("%d", &b);
  for(i = 0; i < b; i++){
  scanf("%d", &a[i]);
 }
 for(i = 0; i < b; i++)
 
  {
      if (a[i] == a[i+1]||a[i] == a[i+2]||a[i] == a[i+3]||a[i] == a[i+4]||a[i] == a[i+5])
    {}else
    {printf("%d ", a[i]);}
  }
return 0;
}


