#include <stdio.h>

int main(void) {
	int n,b[n],i,first=0;
	printf("Enter how many numbers you want\n");
	scanf("%d",&n);
printf("Enter the numbers\n");
	for(i=0;i<=(n+1);i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<=(n+1);i++)
	{
	
		if(b[i]>first)
		{
			first=b[i];
		}
	}
	printf("The largest number is %d",first);

	return 0;
}
