#include <stdio.h>

int main(void) {
	int n,a[n],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	
	return 0;
}
