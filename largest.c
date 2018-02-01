#include <stdio.h>

int main(void) {
	int n,a[n],i,first=0;
	printf("Enter how many numbers you want\n");
	scanf("%d",&n);
printf("Enter the numbers\n");
	for(i=0;i<=(n+1);i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<=(n+1);i++)
	{
	
		if(a[i]>first)
		{
			first=a[i];
		}
	}
	printf("The largest number is %d",first);

	return 0;
}
