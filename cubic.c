#include <stdio.h>

int main(void) {
int l,b,h;
scanf("%d%d%d",&l,&b,&h);
printf("total surface :%d\n",(2*(b+(b*h)+(h*l))));
printf("total volume :%d\n",(l*b*h));
	return 0;
}
