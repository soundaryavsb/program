#include <stdio.h>

int main(void) {
	int n,a[n],i,first=0,second,small;
	printf("Enter how many numbers you want\n");
	scanf("%d",&n);
printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<=(n+1);i++)
	{
	
		if(a[i]>first)
		{
			first=a[i];
			second=first;
		}
	}

{

	for (int j=0;j<n;j++)
	{
		if(a[j]<second)
		{
			small=a[j];
			second=small;

		}
	}
	printf("The smallest number is %d",small);
}
	return 0;
}
