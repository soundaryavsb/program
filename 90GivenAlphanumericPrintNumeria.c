#include <stdio.h>

int main(void) {
	char a[10];
	scanf("%s",a);
	for(int i=0;i<10&&a[i]!='\0';i++)
	{
		//printf("%c",a[i]);
		if(a[i]>='0'&&a[i]<='9')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
