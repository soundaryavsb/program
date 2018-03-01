#include <stdio.h>

int main(void) {
    int a,i;
     scanf("%d",&a);
     for(i=0;i<a;i++)
     {
     	if(a%2==0)
     	{
     		a=a/2;
     	}
     }
     printf("%d",a);
     return 0;
}
