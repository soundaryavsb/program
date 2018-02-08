#include <stdio.h>

int main(void) {
	int f,s,t;
	scanf("%d%d",&f,&s);
	printf("%d\t%d\n",f,s);
	t=f;
	f=s;
	s=t;
	printf("%d\t%d",f,s);
	return 0;
}
