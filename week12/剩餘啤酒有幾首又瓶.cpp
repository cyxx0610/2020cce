#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	b=b*6;
	ans=a-b;
	int c,d;
	c=ans/6;
	d=ans%6;
	printf("%d %d",c,d);
}
