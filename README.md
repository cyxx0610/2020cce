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

## 分式化簡
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


## 漸增數列相加
```c
#include <stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		ans=(i-1)*i=ans;
		
		}
	printf("%d\n",ans);
}
```


## A的Ｂ是方函數
```c
#include <stdio.h>
int MYPOWER (int a,int b)
{
	int ans=1;
	for(int i=b;i>=1;i--){
		ans=ans*a;
		}
		return ans;
	}
	
int main(void)
{
	int a,b;
	scanf("{%d%d",&a,&b);
	printf("[%d]".MYPOWER(a,b));
	return 0;
}
```


## 讀入正數反序列印
```c
#include<stdio.h>
int a[1000];
int main()
{
	int N=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		N=i;
		break;
		}
	}
	
	for(int i=N-i;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```


## 判別正方形
```c 
#include<stdio.h>
int main()
{
	printf("Enter two numbers:  ");
	int a,b;
	scnaf("%d%d",&a,&b);
	if(a==b) printf(:It is a square ");
	else printf("It is not a square ");
}
```


## 2進位轉10進位
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d:,&n);
	int ans=0;
	ans=(n%10)*1;
	n=n/10;
	ans=(n%10)*2+ans;
	n=n/10;
	ans=(n%10)*4+ans;
	n=n/10;
	ans=(n%10)*8=ans;
	n=n/10;
	printf("%d\n",ans);
}
```


## 均標與前標計算
```c
#include<stdio.h>
int main()
{
	int n;
	float avg;
	scanf("%d",&n);
	int a[100];
	int sum==0;
	for(inti-0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=(float)sum/n;
	printf("均標：％.lf\n",avg);
	int sumtop=0;
	float avgtop;
	int x=0;
	for(int i=0;i,n;i++)
	{
		if(a[i]>=avg)
		{
			sumtop+=a[i];
			x++;
		}
	}
	avgtop=(float)sumtop/x;
	printf("前標：%.lf\n",avgtop);
}
```


## 進階題：計算陣列的平方值
```c
#include <stdio.h>
int a[1000];
int main()
{
	int n;
	scnaf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d".&a[i]);
	printf("%d",a[i]*a[i]);
	}
	printf("\n");
}
```


## 進階題：大小寫轉換
```c
#include <stdio.h>
int main()
{
	char a[11];
	scanf("%s:,&a);
	for(int i=0;i<11;i++){
		if('A'<=a[i]&&a[i]<='z') printf("%c",a[i]+32);
		else if('a'<=a[i]&&a[i]<='z') printf("%c",a[i]-32);
		else if('0'<=a[i]&&a[i]<='9') printf("%c",a[i]);
		else if(a[i]==NULL)break;
		}
		printf("\n");
}
```

## 計程車資計算
```c
#include <stdio.h>
int main()
{
	int n,a;
	int ans=0,i=o;
	scanf("%d",&n);
	if(n>2000)
	{
		a=100;i++;
		if(i>=1)
		{
			a+=5;
		}
		ans=((n-2000)/500)*5+a;
		printf("%d\n",ans);
	}
	else printf("%d\n",100);
}
```
## 兩數間可倍5整除的整數
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	c=a;
	a=b;
	b=c;
	}
	for(int i=a;i<=b;i++)
	{
	if(i%5==0)printf("%d\n",i);
	}
}
```


## 整數間最大的距離
```c
#include <stdio.h>
int a[10000];
int main()
{
	int min,max;
	for(int i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
	min=a[0];
	max=a[i];
	}
	for(int i=0;i<3;i++)
	{
	if(min>a[i]min=a[i];
	if(max<a[i]max=a[i];
	}
	printf("%d\n",max-min);
}
```

## 除2輸進
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='2')
		{
			printf("%c",a[i]);
		}
		i++;
	}
	printf("\n");
}
```

	
	

