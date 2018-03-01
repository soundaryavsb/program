#include <stdio.h>
#include <string.h>
int main(void) {
    char a[20];
    int k,c,r,i;
    scanf("%s%d",a,&k);
    c=strlen(a);
    r=c-k;
    for(i=r;a[i]!='\0';i++)
    {
    	printf("%c",a[i]);
    }
	return 0;
}
