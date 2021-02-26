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

## 找倍數
```c
#include <stdio.h>
int main()
{
	int n=10,r=0,a[10];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[10]);
		if(a[10]%3==0) r++;
		}
		printf("%d\n",r);
}
```

## 整數轉化為等級
```c
#include <stdio.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	if(n>90)printf("A");
	else if(n<90&&n>=80)printf("B");
	else if(n<80&&n>=60)printf("C");
	else printf("F");
	printf("\n");
	
}
```

## 分式化解
```c
#include <stdio.h>
int main()
{
	int a,b,i,ans=1;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		if(a%i==0&&b%i==0)
			ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
