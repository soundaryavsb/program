#include <stdio.h>

int main(void) {
int a,b,c=1;
scanf("%d%d",&a,&b);
for(int i=b;i>0;i--)
{
	c=a*c;
}
	printf("%d",c);
  return 0;
}
