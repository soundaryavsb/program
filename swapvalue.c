#include <stdio.h>

int main(void) {
	int fi,se,temp;
	printf("Enter first number and second number\n");
	scanf("%d%d",&fi,&se);
	printf("%d\t%d\n",fi,se);
	temp=fi;
	fi=se;
	se=temp;
	printf("%d\t%d",fi,se);
	return 0;
}
