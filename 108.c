#include <stdio.h>

int main(void) {
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=c;i>0;i--)
    {
    	sum=sum+a;
    	a=a+b;
        }
    printf("%d",sum);
	return 0;
}
