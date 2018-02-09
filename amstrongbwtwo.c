#include <stdio.h>
int main(void) {
	int s,n,a,i,rem,t;
	scanf("%d%d",&a,&n);
	for(i=a+1;i<n-1;i++)
	{
	t=i;
	s=0;
	while(t!=0)
    	{
		 rem=t%10;
		 s=s+rem*rem*rem;
		 t=t/10;
	    }
	if(s==i)
	   {
		
		printf("%d\t",s);
	   }
	}
	return 0;
}
