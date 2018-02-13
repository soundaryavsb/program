#include <stdio.h>

int main(void) {
	int n,k,a[n],i;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("%d",a[k]);
	
	return 0;
}
