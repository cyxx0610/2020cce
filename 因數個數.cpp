## 因數個數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int r=0;
	
	for(int i=1; i<=n; i++)
	{
		if( n % i==0)
		{
			r++;
		}
	}
	
	printf("%d\n",r);

}
```