#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		if((i*i)==n)
		{
			break;
		}
	}
	if((i*i)==n)
	{
		printf("%d",i);
	}
	else printf("0");
}
