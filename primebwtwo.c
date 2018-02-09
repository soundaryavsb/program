#include <stdio.h>
int main(void) {
	int n,a,j,i,count=0;
	scanf("%d%d",&a,&n);
	for(j=a+1;j<n-1;j++)
	{
            count=0;
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		//printf("prime number");
		printf("%d\t",j);
	}
	}
	return 0;
}
