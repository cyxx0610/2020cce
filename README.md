# 2020cce

## 找零錢
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5);
}

```

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
