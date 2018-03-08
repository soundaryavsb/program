#include <stdio.h>
#include <ctype.h>
int main ()
{
  char str[20];
 gets(str);
  int count=0;
  for(int i;i<20;i++)
  {
  if (isdigit(str[i]))
  {
    count++;
  }
}
printf("%d\n",count);
  return 0;
}
